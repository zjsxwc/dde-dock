# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/wangchao/Documents/work/clion-2019.1.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/wangchao/Documents/work/clion-2019.1.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wangchao/Desktop/dde-dock

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wangchao/Desktop/dde-dock/cmake-build-debug

# Include any dependencies generated for this target.
include plugins/shutdown/CMakeFiles/shutdown.dir/depend.make

# Include the progress variables for this target.
include plugins/shutdown/CMakeFiles/shutdown.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/shutdown/CMakeFiles/shutdown.dir/flags.make

plugins/shutdown/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp: ../plugins/shutdown/shutdown.qrc
plugins/shutdown/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp: plugins/shutdown/CMakeFiles/shutdown_autogen.dir/RCCshutdownInfo.cmake
plugins/shutdown/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp: ../plugins/shutdown/resources/icons/fashion.svg
plugins/shutdown/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp: ../plugins/shutdown/resources/icons/normal.svg
plugins/shutdown/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp: /usr/lib/x86_64-linux-gnu/qt5/bin/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wangchao/Desktop/dde-dock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic RCC for shutdown.qrc"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /home/wangchao/Documents/work/clion-2019.1.4/bin/cmake/linux/bin/cmake -E cmake_autorcc /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown/CMakeFiles/shutdown_autogen.dir/RCCshutdownInfo.cmake Debug

plugins/shutdown/CMakeFiles/shutdown.dir/shutdown_autogen/mocs_compilation.cpp.o: plugins/shutdown/CMakeFiles/shutdown.dir/flags.make
plugins/shutdown/CMakeFiles/shutdown.dir/shutdown_autogen/mocs_compilation.cpp.o: plugins/shutdown/shutdown_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wangchao/Desktop/dde-dock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object plugins/shutdown/CMakeFiles/shutdown.dir/shutdown_autogen/mocs_compilation.cpp.o"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shutdown.dir/shutdown_autogen/mocs_compilation.cpp.o -c /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown/shutdown_autogen/mocs_compilation.cpp

plugins/shutdown/CMakeFiles/shutdown.dir/shutdown_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shutdown.dir/shutdown_autogen/mocs_compilation.cpp.i"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown/shutdown_autogen/mocs_compilation.cpp > CMakeFiles/shutdown.dir/shutdown_autogen/mocs_compilation.cpp.i

plugins/shutdown/CMakeFiles/shutdown.dir/shutdown_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shutdown.dir/shutdown_autogen/mocs_compilation.cpp.s"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown/shutdown_autogen/mocs_compilation.cpp -o CMakeFiles/shutdown.dir/shutdown_autogen/mocs_compilation.cpp.s

plugins/shutdown/CMakeFiles/shutdown.dir/__/__/widgets/tipswidget.cpp.o: plugins/shutdown/CMakeFiles/shutdown.dir/flags.make
plugins/shutdown/CMakeFiles/shutdown.dir/__/__/widgets/tipswidget.cpp.o: ../widgets/tipswidget.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wangchao/Desktop/dde-dock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object plugins/shutdown/CMakeFiles/shutdown.dir/__/__/widgets/tipswidget.cpp.o"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shutdown.dir/__/__/widgets/tipswidget.cpp.o -c /home/wangchao/Desktop/dde-dock/widgets/tipswidget.cpp

plugins/shutdown/CMakeFiles/shutdown.dir/__/__/widgets/tipswidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shutdown.dir/__/__/widgets/tipswidget.cpp.i"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wangchao/Desktop/dde-dock/widgets/tipswidget.cpp > CMakeFiles/shutdown.dir/__/__/widgets/tipswidget.cpp.i

plugins/shutdown/CMakeFiles/shutdown.dir/__/__/widgets/tipswidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shutdown.dir/__/__/widgets/tipswidget.cpp.s"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wangchao/Desktop/dde-dock/widgets/tipswidget.cpp -o CMakeFiles/shutdown.dir/__/__/widgets/tipswidget.cpp.s

plugins/shutdown/CMakeFiles/shutdown.dir/dbus/dbusaccount.cpp.o: plugins/shutdown/CMakeFiles/shutdown.dir/flags.make
plugins/shutdown/CMakeFiles/shutdown.dir/dbus/dbusaccount.cpp.o: ../plugins/shutdown/dbus/dbusaccount.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wangchao/Desktop/dde-dock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object plugins/shutdown/CMakeFiles/shutdown.dir/dbus/dbusaccount.cpp.o"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shutdown.dir/dbus/dbusaccount.cpp.o -c /home/wangchao/Desktop/dde-dock/plugins/shutdown/dbus/dbusaccount.cpp

plugins/shutdown/CMakeFiles/shutdown.dir/dbus/dbusaccount.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shutdown.dir/dbus/dbusaccount.cpp.i"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wangchao/Desktop/dde-dock/plugins/shutdown/dbus/dbusaccount.cpp > CMakeFiles/shutdown.dir/dbus/dbusaccount.cpp.i

plugins/shutdown/CMakeFiles/shutdown.dir/dbus/dbusaccount.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shutdown.dir/dbus/dbusaccount.cpp.s"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wangchao/Desktop/dde-dock/plugins/shutdown/dbus/dbusaccount.cpp -o CMakeFiles/shutdown.dir/dbus/dbusaccount.cpp.s

plugins/shutdown/CMakeFiles/shutdown.dir/pluginwidget.cpp.o: plugins/shutdown/CMakeFiles/shutdown.dir/flags.make
plugins/shutdown/CMakeFiles/shutdown.dir/pluginwidget.cpp.o: ../plugins/shutdown/pluginwidget.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wangchao/Desktop/dde-dock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object plugins/shutdown/CMakeFiles/shutdown.dir/pluginwidget.cpp.o"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shutdown.dir/pluginwidget.cpp.o -c /home/wangchao/Desktop/dde-dock/plugins/shutdown/pluginwidget.cpp

plugins/shutdown/CMakeFiles/shutdown.dir/pluginwidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shutdown.dir/pluginwidget.cpp.i"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wangchao/Desktop/dde-dock/plugins/shutdown/pluginwidget.cpp > CMakeFiles/shutdown.dir/pluginwidget.cpp.i

plugins/shutdown/CMakeFiles/shutdown.dir/pluginwidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shutdown.dir/pluginwidget.cpp.s"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wangchao/Desktop/dde-dock/plugins/shutdown/pluginwidget.cpp -o CMakeFiles/shutdown.dir/pluginwidget.cpp.s

plugins/shutdown/CMakeFiles/shutdown.dir/shutdownplugin.cpp.o: plugins/shutdown/CMakeFiles/shutdown.dir/flags.make
plugins/shutdown/CMakeFiles/shutdown.dir/shutdownplugin.cpp.o: ../plugins/shutdown/shutdownplugin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wangchao/Desktop/dde-dock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object plugins/shutdown/CMakeFiles/shutdown.dir/shutdownplugin.cpp.o"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shutdown.dir/shutdownplugin.cpp.o -c /home/wangchao/Desktop/dde-dock/plugins/shutdown/shutdownplugin.cpp

plugins/shutdown/CMakeFiles/shutdown.dir/shutdownplugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shutdown.dir/shutdownplugin.cpp.i"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wangchao/Desktop/dde-dock/plugins/shutdown/shutdownplugin.cpp > CMakeFiles/shutdown.dir/shutdownplugin.cpp.i

plugins/shutdown/CMakeFiles/shutdown.dir/shutdownplugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shutdown.dir/shutdownplugin.cpp.s"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wangchao/Desktop/dde-dock/plugins/shutdown/shutdownplugin.cpp -o CMakeFiles/shutdown.dir/shutdownplugin.cpp.s

plugins/shutdown/CMakeFiles/shutdown.dir/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp.o: plugins/shutdown/CMakeFiles/shutdown.dir/flags.make
plugins/shutdown/CMakeFiles/shutdown.dir/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp.o: plugins/shutdown/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wangchao/Desktop/dde-dock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object plugins/shutdown/CMakeFiles/shutdown.dir/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp.o"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/shutdown.dir/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp.o -c /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp

plugins/shutdown/CMakeFiles/shutdown.dir/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/shutdown.dir/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp.i"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp > CMakeFiles/shutdown.dir/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp.i

plugins/shutdown/CMakeFiles/shutdown.dir/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/shutdown.dir/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp.s"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp -o CMakeFiles/shutdown.dir/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp.s

# Object files for target shutdown
shutdown_OBJECTS = \
"CMakeFiles/shutdown.dir/shutdown_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/shutdown.dir/__/__/widgets/tipswidget.cpp.o" \
"CMakeFiles/shutdown.dir/dbus/dbusaccount.cpp.o" \
"CMakeFiles/shutdown.dir/pluginwidget.cpp.o" \
"CMakeFiles/shutdown.dir/shutdownplugin.cpp.o" \
"CMakeFiles/shutdown.dir/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp.o"

# External object files for target shutdown
shutdown_EXTERNAL_OBJECTS =

plugins/libshutdown.so: plugins/shutdown/CMakeFiles/shutdown.dir/shutdown_autogen/mocs_compilation.cpp.o
plugins/libshutdown.so: plugins/shutdown/CMakeFiles/shutdown.dir/__/__/widgets/tipswidget.cpp.o
plugins/libshutdown.so: plugins/shutdown/CMakeFiles/shutdown.dir/dbus/dbusaccount.cpp.o
plugins/libshutdown.so: plugins/shutdown/CMakeFiles/shutdown.dir/pluginwidget.cpp.o
plugins/libshutdown.so: plugins/shutdown/CMakeFiles/shutdown.dir/shutdownplugin.cpp.o
plugins/libshutdown.so: plugins/shutdown/CMakeFiles/shutdown.dir/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp.o
plugins/libshutdown.so: plugins/shutdown/CMakeFiles/shutdown.dir/build.make
plugins/libshutdown.so: /usr/lib/x86_64-linux-gnu/libQt5Svg.so.5.7.1
plugins/libshutdown.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.7.1
plugins/libshutdown.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.7.1
plugins/libshutdown.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.7.1
plugins/libshutdown.so: plugins/shutdown/CMakeFiles/shutdown.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wangchao/Desktop/dde-dock/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX shared library ../libshutdown.so"
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/shutdown.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/shutdown/CMakeFiles/shutdown.dir/build: plugins/libshutdown.so

.PHONY : plugins/shutdown/CMakeFiles/shutdown.dir/build

plugins/shutdown/CMakeFiles/shutdown.dir/clean:
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown && $(CMAKE_COMMAND) -P CMakeFiles/shutdown.dir/cmake_clean.cmake
.PHONY : plugins/shutdown/CMakeFiles/shutdown.dir/clean

plugins/shutdown/CMakeFiles/shutdown.dir/depend: plugins/shutdown/shutdown_autogen/EWIEGA46WW/qrc_shutdown.cpp
	cd /home/wangchao/Desktop/dde-dock/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wangchao/Desktop/dde-dock /home/wangchao/Desktop/dde-dock/plugins/shutdown /home/wangchao/Desktop/dde-dock/cmake-build-debug /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown /home/wangchao/Desktop/dde-dock/cmake-build-debug/plugins/shutdown/CMakeFiles/shutdown.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/shutdown/CMakeFiles/shutdown.dir/depend

