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
include plugins/webpresence/CMakeFiles/kopete_webpresence.dir/depend.make

# Include the progress variables for this target.
include plugins/webpresence/CMakeFiles/kopete_webpresence.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/webpresence/CMakeFiles/kopete_webpresence.dir/flags.make

plugins/webpresence/webpresenceconfig.h: ../plugins/webpresence/webpresenceconfig.kcfg
plugins/webpresence/webpresenceconfig.h: ../plugins/webpresence/webpresenceconfig.kcfgc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating webpresenceconfig.h, webpresenceconfig.cpp"
	cd /home/harshcrop/kopete/build/plugins/webpresence && /usr/bin/kconfig_compiler /home/harshcrop/kopete/plugins/webpresence/webpresenceconfig.kcfg /home/harshcrop/kopete/plugins/webpresence/webpresenceconfig.kcfgc -d /home/harshcrop/kopete/build/plugins/webpresence/

plugins/webpresence/webpresenceconfig.cpp: plugins/webpresence/webpresenceconfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate plugins/webpresence/webpresenceconfig.cpp

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.o: plugins/webpresence/CMakeFiles/kopete_webpresence.dir/flags.make
plugins/webpresence/CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.o: plugins/webpresence/kopete_webpresence_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object plugins/webpresence/CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.o"
	cd /home/harshcrop/kopete/build/plugins/webpresence && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.o -c /home/harshcrop/kopete/build/plugins/webpresence/kopete_webpresence_automoc.cpp

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.i"
	cd /home/harshcrop/kopete/build/plugins/webpresence && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/build/plugins/webpresence/kopete_webpresence_automoc.cpp > CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.i

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.s"
	cd /home/harshcrop/kopete/build/plugins/webpresence && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/build/plugins/webpresence/kopete_webpresence_automoc.cpp -o CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.s

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.o.requires:

.PHONY : plugins/webpresence/CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.o.requires

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.o.provides: plugins/webpresence/CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.o.requires
	$(MAKE) -f plugins/webpresence/CMakeFiles/kopete_webpresence.dir/build.make plugins/webpresence/CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.o.provides.build
.PHONY : plugins/webpresence/CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.o.provides

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.o.provides.build: plugins/webpresence/CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.o


plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.o: plugins/webpresence/CMakeFiles/kopete_webpresence.dir/flags.make
plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.o: ../plugins/webpresence/webpresenceplugin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.o"
	cd /home/harshcrop/kopete/build/plugins/webpresence && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.o -c /home/harshcrop/kopete/plugins/webpresence/webpresenceplugin.cpp

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.i"
	cd /home/harshcrop/kopete/build/plugins/webpresence && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/plugins/webpresence/webpresenceplugin.cpp > CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.i

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.s"
	cd /home/harshcrop/kopete/build/plugins/webpresence && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/plugins/webpresence/webpresenceplugin.cpp -o CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.s

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.o.requires:

.PHONY : plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.o.requires

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.o.provides: plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.o.requires
	$(MAKE) -f plugins/webpresence/CMakeFiles/kopete_webpresence.dir/build.make plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.o.provides.build
.PHONY : plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.o.provides

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.o.provides.build: plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.o


plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.o: plugins/webpresence/CMakeFiles/kopete_webpresence.dir/flags.make
plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.o: plugins/webpresence/webpresenceconfig.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.o"
	cd /home/harshcrop/kopete/build/plugins/webpresence && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.o -c /home/harshcrop/kopete/build/plugins/webpresence/webpresenceconfig.cpp

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.i"
	cd /home/harshcrop/kopete/build/plugins/webpresence && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/build/plugins/webpresence/webpresenceconfig.cpp > CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.i

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.s"
	cd /home/harshcrop/kopete/build/plugins/webpresence && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/build/plugins/webpresence/webpresenceconfig.cpp -o CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.s

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.o.requires:

.PHONY : plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.o.requires

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.o.provides: plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.o.requires
	$(MAKE) -f plugins/webpresence/CMakeFiles/kopete_webpresence.dir/build.make plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.o.provides.build
.PHONY : plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.o.provides

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.o.provides.build: plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.o


# Object files for target kopete_webpresence
kopete_webpresence_OBJECTS = \
"CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.o" \
"CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.o" \
"CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.o"

# External object files for target kopete_webpresence
kopete_webpresence_EXTERNAL_OBJECTS =

lib/kopete_webpresence.so: plugins/webpresence/CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.o
lib/kopete_webpresence.so: plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.o
lib/kopete_webpresence.so: plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.o
lib/kopete_webpresence.so: plugins/webpresence/CMakeFiles/kopete_webpresence.dir/build.make
lib/kopete_webpresence.so: lib/libkopete.so.4.14.16
lib/kopete_webpresence.so: /usr/lib/x86_64-linux-gnu/libxml2.so
lib/kopete_webpresence.so: /usr/lib/x86_64-linux-gnu/libxslt.so
lib/kopete_webpresence.so: /usr/lib/x86_64-linux-gnu/libQtXml.so
lib/kopete_webpresence.so: /usr/lib/libkio.so.5.14.16
lib/kopete_webpresence.so: /usr/lib/x86_64-linux-gnu/libQtXml.so
lib/kopete_webpresence.so: /usr/lib/libkdeui.so.5.14.16
lib/kopete_webpresence.so: /usr/lib/x86_64-linux-gnu/libQtSvg.so
lib/kopete_webpresence.so: /usr/lib/x86_64-linux-gnu/libQtNetwork.so
lib/kopete_webpresence.so: /usr/lib/x86_64-linux-gnu/libQtGui.so
lib/kopete_webpresence.so: /usr/lib/libkdecore.so.5.14.16
lib/kopete_webpresence.so: /usr/lib/x86_64-linux-gnu/libQtDBus.so
lib/kopete_webpresence.so: /usr/lib/x86_64-linux-gnu/libQtCore.so
lib/kopete_webpresence.so: plugins/webpresence/CMakeFiles/kopete_webpresence.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared module ../../lib/kopete_webpresence.so"
	cd /home/harshcrop/kopete/build/plugins/webpresence && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kopete_webpresence.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/webpresence/CMakeFiles/kopete_webpresence.dir/build: lib/kopete_webpresence.so

.PHONY : plugins/webpresence/CMakeFiles/kopete_webpresence.dir/build

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/requires: plugins/webpresence/CMakeFiles/kopete_webpresence.dir/kopete_webpresence_automoc.cpp.o.requires
plugins/webpresence/CMakeFiles/kopete_webpresence.dir/requires: plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceplugin.cpp.o.requires
plugins/webpresence/CMakeFiles/kopete_webpresence.dir/requires: plugins/webpresence/CMakeFiles/kopete_webpresence.dir/webpresenceconfig.cpp.o.requires

.PHONY : plugins/webpresence/CMakeFiles/kopete_webpresence.dir/requires

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/clean:
	cd /home/harshcrop/kopete/build/plugins/webpresence && $(CMAKE_COMMAND) -P CMakeFiles/kopete_webpresence.dir/cmake_clean.cmake
.PHONY : plugins/webpresence/CMakeFiles/kopete_webpresence.dir/clean

plugins/webpresence/CMakeFiles/kopete_webpresence.dir/depend: plugins/webpresence/webpresenceconfig.h
plugins/webpresence/CMakeFiles/kopete_webpresence.dir/depend: plugins/webpresence/webpresenceconfig.cpp
	cd /home/harshcrop/kopete/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/harshcrop/kopete /home/harshcrop/kopete/plugins/webpresence /home/harshcrop/kopete/build /home/harshcrop/kopete/build/plugins/webpresence /home/harshcrop/kopete/build/plugins/webpresence/CMakeFiles/kopete_webpresence.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/webpresence/CMakeFiles/kopete_webpresence.dir/depend
