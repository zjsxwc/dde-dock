/**
 * Copyright (C) 2015 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

#include "dockappmanager.h"
#include "dbus/dbuslauncher.h"

DockAppManager::DockAppManager(QObject *parent) : QObject(parent)
{
    m_entryManager = new DBusEntryManager(this);
    connect(m_entryManager, &DBusEntryManager::Added, this, &DockAppManager::onEntryAdded);
    connect(m_entryManager, &DBusEntryManager::Removed, this, &DockAppManager::onEntryRemoved);
    DBusLauncher *dbusLauncher = new DBusLauncher(this);
    connect(dbusLauncher, &DBusLauncher::ItemChanged, [=](const QString &in0, ItemInfo in1){
        if (in0 == "deleted") {
            onEntryRemoved(in1.key);
            m_dockAppManager->RequestUndock(in1.key);
        }
    });
}

void DockAppManager::initEntries()
{
    QList<QDBusObjectPath> entryList = m_entryManager->entries();
    QList<DBusDockEntry *> initEntryList;
    for (QDBusObjectPath objPath : entryList)
    {
        DBusDockEntry *dep = new DBusDockEntry(objPath.path());
        if (/*dep->isValid() && */dep->type() == "App") {
            m_initEntries.insert(dep->id(), dep->path());
            initEntryList<< dep;
        }
    }

    initItemList(initEntryList);

    QTimer *sync = new QTimer(this);
    sync->setInterval(20 * 1000);
    sync->start();

    connect(sync, &QTimer::timeout, this, [ = ]() {
//        qDebug()<< "sync data check";
        bool deamonCrash = false;
        QList<QDBusObjectPath> entryList = m_entryManager->entries();
        // check path change
        for (QString dockEntryId : m_initEntries.keys()) {
            if (!entryList.contains(QDBusObjectPath(m_initEntries.value(dockEntryId)))) {
                deamonCrash = true;
                qCritical() << "find invaild path, maybe daemon crash" << m_initEntries.value(dockEntryId);
                onEntryRemoved(dockEntryId);
            } else {
                entryList.removeOne(QDBusObjectPath(m_initEntries.value(dockEntryId)));
            }
        }

        for (QDBusObjectPath objPath : entryList) {
            deamonCrash = true;
            qCritical() << "add objPath, maybe daemon crash" << objPath.path();
            onEntryAdded(objPath);
        }

        if (deamonCrash) {
            sync->setInterval(5*1000);
        } else {
            sync->setInterval(20 * 1000);
        }
    });

}

void DockAppManager::onEntryAdded(const QDBusObjectPath &path)
{
    DBusDockEntry *entryProxyer = new DBusDockEntry(path.path());
    if (entryProxyer->isValid() && entryProxyer->type() == "App")
    {
        DockAppItem *item = new DockAppItem();
        QString tmpId = entryProxyer->id();
        item->setItemId(tmpId);
        if (m_ids.indexOf(tmpId) != -1) {
            item->deleteLater();
        }else{
            qDebug() << "app entry add:" << tmpId ;
            bool isTheDropOne = m_dockingItemId == tmpId;
            m_ids.append(tmpId);
            if (isTheDropOne) {
                emit entryAdded(item);
            }
            else {
                emit entryAppend(item);
            }

            emit requestSort();

            m_dockingItemId = "";
        }
        item->setEntryProxyer(entryProxyer);
        m_initEntries.insert(entryProxyer->id(), entryProxyer->path());
    } else {
        entryProxyer->deleteLater();
    }
}

void DockAppManager::setDockingItemId(const QString &dockingItemId)
{
    m_dockingItemId = dockingItemId;
}

void DockAppManager::onEntryRemoved(const QString &id)
{
    if (m_ids.indexOf(id) != -1) {
        qDebug() << "app entry remove:" << id;
        m_ids.removeAll(id);
        emit entryRemoved(id);
    }
    m_initEntries.remove(id);
}

void DockAppManager::initItemList(QList<DBusDockEntry *> initEntryList)
{
    QStringList dockedList = m_dockAppManager->DockedAppList().value();

    m_ids = QStringList();
    QList<DBusDockEntry*> undockedEntries;

    for (DBusDockEntry *entry : initEntryList) {
        m_ids << entry->id();
        if (dockedList.indexOf(entry->id()) != -1) {
            DockAppItem *item = new DockAppItem;
            emit entryAppend(item);
            item->setEntryProxyer(entry);
        } else {
            undockedEntries << entry;
        }
    }

    for (DBusDockEntry *entry : undockedEntries) {
        DockAppItem *item = new DockAppItem;
        emit entryAppend(item);
        item->setEntryProxyer(entry);
    }
}
