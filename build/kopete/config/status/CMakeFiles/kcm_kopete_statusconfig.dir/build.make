# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/harshcrop/kopete

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/harshcrop/kopete/build

# Include any dependencies generated for this target.
include kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/depend.make

# Include the progress variables for this target.
include kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/progress.make

# Include the compile flags for this target's objects.
include kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/flags.make

kopete/config/status/ui_statusconfig_manager.h: ../kopete/config/status/statusconfig_manager.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_statusconfig_manager.h"
	cd /home/harshcrop/kopete/build/kopete/config/status && /usr/bin/cmake -DKDE4_HEADER:BOOL=ON -DKDE_UIC_EXECUTABLE:FILEPATH=/usr/lib/x86_64-linux-gnu/qt4/bin/uic -DKDE_UIC_FILE:FILEPATH=/home/harshcrop/kopete/kopete/config/status/statusconfig_manager.ui -DKDE_UIC_H_FILE:FILEPATH=/home/harshcrop/kopete/build/kopete/config/status/ui_statusconfig_manager.h -DKDE_UIC_BASENAME:STRING=statusconfig_manager -P /usr/share/kde4/apps/cmake/modules/kde4uic.cmake

kopete/config/status/ui_statusconfig_general.h: ../kopete/config/status/statusconfig_general.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ui_statusconfig_general.h"
	cd /home/harshcrop/kopete/build/kopete/config/status && /usr/bin/cmake -DKDE4_HEADER:BOOL=ON -DKDE_UIC_EXECUTABLE:FILEPATH=/usr/lib/x86_64-linux-gnu/qt4/bin/uic -DKDE_UIC_FILE:FILEPATH=/home/harshcrop/kopete/kopete/config/status/statusconfig_general.ui -DKDE_UIC_H_FILE:FILEPATH=/home/harshcrop/kopete/build/kopete/config/status/ui_statusconfig_general.h -DKDE_UIC_BASENAME:STRING=statusconfig_general -P /usr/share/kde4/apps/cmake/modules/kde4uic.cmake

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.o: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/flags.make
kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.o: kopete/config/status/kcm_kopete_statusconfig_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.o"
	cd /home/harshcrop/kopete/build/kopete/config/status && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.o -c /home/harshcrop/kopete/build/kopete/config/status/kcm_kopete_statusconfig_automoc.cpp

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.i"
	cd /home/harshcrop/kopete/build/kopete/config/status && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/build/kopete/config/status/kcm_kopete_statusconfig_automoc.cpp > CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.i

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.s"
	cd /home/harshcrop/kopete/build/kopete/config/status && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/build/kopete/config/status/kcm_kopete_statusconfig_automoc.cpp -o CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.s

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.o.requires:

.PHONY : kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.o.requires

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.o.provides: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.o.requires
	$(MAKE) -f kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/build.make kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.o.provides.build
.PHONY : kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.o.provides

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.o.provides.build: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.o


kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.o: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/flags.make
kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.o: ../kopete/config/status/statusconfig.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.o"
	cd /home/harshcrop/kopete/build/kopete/config/status && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.o -c /home/harshcrop/kopete/kopete/config/status/statusconfig.cpp

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.i"
	cd /home/harshcrop/kopete/build/kopete/config/status && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/kopete/config/status/statusconfig.cpp > CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.i

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.s"
	cd /home/harshcrop/kopete/build/kopete/config/status && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/kopete/config/status/statusconfig.cpp -o CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.s

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.o.requires:

.PHONY : kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.o.requires

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.o.provides: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.o.requires
	$(MAKE) -f kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/build.make kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.o.provides.build
.PHONY : kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.o.provides

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.o.provides.build: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.o


kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.o: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/flags.make
kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.o: ../kopete/config/status/statusconfig_manager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.o"
	cd /home/harshcrop/kopete/build/kopete/config/status && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.o -c /home/harshcrop/kopete/kopete/config/status/statusconfig_manager.cpp

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.i"
	cd /home/harshcrop/kopete/build/kopete/config/status && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/kopete/config/status/statusconfig_manager.cpp > CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.i

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.s"
	cd /home/harshcrop/kopete/build/kopete/config/status && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/kopete/config/status/statusconfig_manager.cpp -o CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.s

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.o.requires:

.PHONY : kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.o.requires

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.o.provides: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.o.requires
	$(MAKE) -f kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/build.make kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.o.provides.build
.PHONY : kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.o.provides

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.o.provides.build: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.o


kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.o: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/flags.make
kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.o: ../kopete/config/status/statusconfig_general.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.o"
	cd /home/harshcrop/kopete/build/kopete/config/status && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.o -c /home/harshcrop/kopete/kopete/config/status/statusconfig_general.cpp

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.i"
	cd /home/harshcrop/kopete/build/kopete/config/status && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/kopete/config/status/statusconfig_general.cpp > CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.i

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.s"
	cd /home/harshcrop/kopete/build/kopete/config/status && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/kopete/config/status/statusconfig_general.cpp -o CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.s

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.o.requires:

.PHONY : kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.o.requires

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.o.provides: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.o.requires
	$(MAKE) -f kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/build.make kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.o.provides.build
.PHONY : kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.o.provides

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.o.provides.build: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.o


kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.o: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/flags.make
kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.o: ../kopete/config/status/statusmodel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.o"
	cd /home/harshcrop/kopete/build/kopete/config/status && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.o -c /home/harshcrop/kopete/kopete/config/status/statusmodel.cpp

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.i"
	cd /home/harshcrop/kopete/build/kopete/config/status && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/kopete/config/status/statusmodel.cpp > CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.i

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.s"
	cd /home/harshcrop/kopete/build/kopete/config/status && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/kopete/config/status/statusmodel.cpp -o CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.s

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.o.requires:

.PHONY : kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.o.requires

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.o.provides: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.o.requires
	$(MAKE) -f kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/build.make kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.o.provides.build
.PHONY : kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.o.provides

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.o.provides.build: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.o


# Object files for target kcm_kopete_statusconfig
kcm_kopete_statusconfig_OBJECTS = \
"CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.o" \
"CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.o" \
"CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.o" \
"CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.o" \
"CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.o"

# External object files for target kcm_kopete_statusconfig
kcm_kopete_statusconfig_EXTERNAL_OBJECTS =

lib/kcm_kopete_statusconfig.so: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.o
lib/kcm_kopete_statusconfig.so: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.o
lib/kcm_kopete_statusconfig.so: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.o
lib/kcm_kopete_statusconfig.so: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.o
lib/kcm_kopete_statusconfig.so: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.o
lib/kcm_kopete_statusconfig.so: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/build.make
lib/kcm_kopete_statusconfig.so: /usr/lib/libkutils.so.4.14.16
lib/kcm_kopete_statusconfig.so: /usr/lib/x86_64-linux-gnu/libQtXml.so
lib/kcm_kopete_statusconfig.so: lib/libkopete.so.4.14.16
lib/kcm_kopete_statusconfig.so: /usr/lib/libkidletime.so.4.14.16
lib/kcm_kopete_statusconfig.so: /usr/lib/libkprintutils.so.4.14.16
lib/kcm_kopete_statusconfig.so: /usr/lib/libkemoticons.so.4.14.16
lib/kcm_kopete_statusconfig.so: /usr/lib/libkcmutils.so.4.14.16
lib/kcm_kopete_statusconfig.so: /usr/lib/x86_64-linux-gnu/libQtXml.so
lib/kcm_kopete_statusconfig.so: /usr/lib/libkdeui.so.5.14.16
lib/kcm_kopete_statusconfig.so: /usr/lib/x86_64-linux-gnu/libQtSvg.so
lib/kcm_kopete_statusconfig.so: /usr/lib/x86_64-linux-gnu/libQtGui.so
lib/kcm_kopete_statusconfig.so: /usr/lib/libkdecore.so.5.14.16
lib/kcm_kopete_statusconfig.so: /usr/lib/x86_64-linux-gnu/libQtDBus.so
lib/kcm_kopete_statusconfig.so: /usr/lib/x86_64-linux-gnu/libQtCore.so
lib/kcm_kopete_statusconfig.so: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX shared module ../../../lib/kcm_kopete_statusconfig.so"
	cd /home/harshcrop/kopete/build/kopete/config/status && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kcm_kopete_statusconfig.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/build: lib/kcm_kopete_statusconfig.so

.PHONY : kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/build

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/requires: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/kcm_kopete_statusconfig_automoc.cpp.o.requires
kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/requires: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig.cpp.o.requires
kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/requires: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_manager.cpp.o.requires
kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/requires: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusconfig_general.cpp.o.requires
kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/requires: kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/statusmodel.cpp.o.requires

.PHONY : kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/requires

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/clean:
	cd /home/harshcrop/kopete/build/kopete/config/status && $(CMAKE_COMMAND) -P CMakeFiles/kcm_kopete_statusconfig.dir/cmake_clean.cmake
.PHONY : kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/clean

kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/depend: kopete/config/status/ui_statusconfig_manager.h
kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/depend: kopete/config/status/ui_statusconfig_general.h
	cd /home/harshcrop/kopete/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/harshcrop/kopete /home/harshcrop/kopete/kopete/config/status /home/harshcrop/kopete/build /home/harshcrop/kopete/build/kopete/config/status /home/harshcrop/kopete/build/kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : kopete/config/status/CMakeFiles/kcm_kopete_statusconfig.dir/depend
