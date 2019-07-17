# Install script for directory: /home/wangchao/Desktop/dde-dock

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dde-dock/translations" TYPE FILE FILES
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_af.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_am_ET.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_ar.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_ast.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_az.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_bg.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_bn.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_ca.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_cs.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_da.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_de.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_el.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_en_AU.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_en_GB.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_eo.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_es.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_es_419.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_et.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_fa.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_fi.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_fi_FI.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_fr.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_gl.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_gl_ES.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_he.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_hi_IN.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_hr.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_hu.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_hy.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_id.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_it.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_ja.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_kn_IN.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_ko.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_ku_IQ.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_lo.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_lt.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_ml.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_mn.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_ms.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_nb.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_ne.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_nl.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_pa.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_pam.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_pl.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_pt.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_pt_BR.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_ro.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_ru.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_si.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_sk.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_sl.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_sq.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_sr.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_sv.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_ta.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_tr.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_ug.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_uk.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_ur.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_vi.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_zh_CN.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_zh_HK.qm"
    "/home/wangchao/Desktop/dde-dock/translations/dde-dock_zh_TW.qm"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/dde-dock" TYPE FILE FILES
    "/home/wangchao/Desktop/dde-dock/interfaces/constants.h"
    "/home/wangchao/Desktop/dde-dock/interfaces/pluginproxyinterface.h"
    "/home/wangchao/Desktop/dde-dock/interfaces/pluginsiteminterface.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/wangchao/Desktop/dde-dock/dde-dock.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/DdeDock" TYPE FILE FILES "/home/wangchao/Desktop/dde-dock/cmake/DdeDock/DdeDockConfig.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/dbus-1/services/com.deepin.dde.Dock.service")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/dbus-1/services" TYPE FILE FILES "/home/wangchao/Desktop/dde-dock/frame/com.deepin.dde.Dock.service")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/wangchao/Desktop/dde-dock/cmake-build-debug/frame/cmake_install.cmake")
  include("/home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/wangchao/Desktop/dde-dock/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
