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
include plugins/latex/CMakeFiles/kopete_latex.dir/depend.make

# Include the progress variables for this target.
include plugins/latex/CMakeFiles/kopete_latex.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/latex/CMakeFiles/kopete_latex.dir/flags.make

plugins/latex/latexconfig.h: ../plugins/latex/latexconfig.kcfg
plugins/latex/latexconfig.h: ../plugins/latex/latexconfig.kcfgc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating latexconfig.h, latexconfig.cpp"
	cd /home/harshcrop/kopete/build/plugins/latex && /usr/bin/kconfig_compiler /home/harshcrop/kopete/plugins/latex/latexconfig.kcfg /home/harshcrop/kopete/plugins/latex/latexconfig.kcfgc -d /home/harshcrop/kopete/build/plugins/latex/

plugins/latex/latexconfig.cpp: plugins/latex/latexconfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate plugins/latex/latexconfig.cpp

plugins/latex/CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.o: plugins/latex/CMakeFiles/kopete_latex.dir/flags.make
plugins/latex/CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.o: plugins/latex/kopete_latex_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object plugins/latex/CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.o"
	cd /home/harshcrop/kopete/build/plugins/latex && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.o -c /home/harshcrop/kopete/build/plugins/latex/kopete_latex_automoc.cpp

plugins/latex/CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.i"
	cd /home/harshcrop/kopete/build/plugins/latex && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/build/plugins/latex/kopete_latex_automoc.cpp > CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.i

plugins/latex/CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.s"
	cd /home/harshcrop/kopete/build/plugins/latex && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/build/plugins/latex/kopete_latex_automoc.cpp -o CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.s

plugins/latex/CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.o.requires:

.PHONY : plugins/latex/CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.o.requires

plugins/latex/CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.o.provides: plugins/latex/CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.o.requires
	$(MAKE) -f plugins/latex/CMakeFiles/kopete_latex.dir/build.make plugins/latex/CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.o.provides.build
.PHONY : plugins/latex/CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.o.provides

plugins/latex/CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.o.provides.build: plugins/latex/CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.o


plugins/latex/CMakeFiles/kopete_latex.dir/latexplugin.cpp.o: plugins/latex/CMakeFiles/kopete_latex.dir/flags.make
plugins/latex/CMakeFiles/kopete_latex.dir/latexplugin.cpp.o: ../plugins/latex/latexplugin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object plugins/latex/CMakeFiles/kopete_latex.dir/latexplugin.cpp.o"
	cd /home/harshcrop/kopete/build/plugins/latex && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kopete_latex.dir/latexplugin.cpp.o -c /home/harshcrop/kopete/plugins/latex/latexplugin.cpp

plugins/latex/CMakeFiles/kopete_latex.dir/latexplugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kopete_latex.dir/latexplugin.cpp.i"
	cd /home/harshcrop/kopete/build/plugins/latex && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/plugins/latex/latexplugin.cpp > CMakeFiles/kopete_latex.dir/latexplugin.cpp.i

plugins/latex/CMakeFiles/kopete_latex.dir/latexplugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kopete_latex.dir/latexplugin.cpp.s"
	cd /home/harshcrop/kopete/build/plugins/latex && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/plugins/latex/latexplugin.cpp -o CMakeFiles/kopete_latex.dir/latexplugin.cpp.s

plugins/latex/CMakeFiles/kopete_latex.dir/latexplugin.cpp.o.requires:

.PHONY : plugins/latex/CMakeFiles/kopete_latex.dir/latexplugin.cpp.o.requires

plugins/latex/CMakeFiles/kopete_latex.dir/latexplugin.cpp.o.provides: plugins/latex/CMakeFiles/kopete_latex.dir/latexplugin.cpp.o.requires
	$(MAKE) -f plugins/latex/CMakeFiles/kopete_latex.dir/build.make plugins/latex/CMakeFiles/kopete_latex.dir/latexplugin.cpp.o.provides.build
.PHONY : plugins/latex/CMakeFiles/kopete_latex.dir/latexplugin.cpp.o.provides

plugins/latex/CMakeFiles/kopete_latex.dir/latexplugin.cpp.o.provides.build: plugins/latex/CMakeFiles/kopete_latex.dir/latexplugin.cpp.o


plugins/latex/CMakeFiles/kopete_latex.dir/latexguiclient.cpp.o: plugins/latex/CMakeFiles/kopete_latex.dir/flags.make
plugins/latex/CMakeFiles/kopete_latex.dir/latexguiclient.cpp.o: ../plugins/latex/latexguiclient.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object plugins/latex/CMakeFiles/kopete_latex.dir/latexguiclient.cpp.o"
	cd /home/harshcrop/kopete/build/plugins/latex && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kopete_latex.dir/latexguiclient.cpp.o -c /home/harshcrop/kopete/plugins/latex/latexguiclient.cpp

plugins/latex/CMakeFiles/kopete_latex.dir/latexguiclient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kopete_latex.dir/latexguiclient.cpp.i"
	cd /home/harshcrop/kopete/build/plugins/latex && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/plugins/latex/latexguiclient.cpp > CMakeFiles/kopete_latex.dir/latexguiclient.cpp.i

plugins/latex/CMakeFiles/kopete_latex.dir/latexguiclient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kopete_latex.dir/latexguiclient.cpp.s"
	cd /home/harshcrop/kopete/build/plugins/latex && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/plugins/latex/latexguiclient.cpp -o CMakeFiles/kopete_latex.dir/latexguiclient.cpp.s

plugins/latex/CMakeFiles/kopete_latex.dir/latexguiclient.cpp.o.requires:

.PHONY : plugins/latex/CMakeFiles/kopete_latex.dir/latexguiclient.cpp.o.requires

plugins/latex/CMakeFiles/kopete_latex.dir/latexguiclient.cpp.o.provides: plugins/latex/CMakeFiles/kopete_latex.dir/latexguiclient.cpp.o.requires
	$(MAKE) -f plugins/latex/CMakeFiles/kopete_latex.dir/build.make plugins/latex/CMakeFiles/kopete_latex.dir/latexguiclient.cpp.o.provides.build
.PHONY : plugins/latex/CMakeFiles/kopete_latex.dir/latexguiclient.cpp.o.provides

plugins/latex/CMakeFiles/kopete_latex.dir/latexguiclient.cpp.o.provides.build: plugins/latex/CMakeFiles/kopete_latex.dir/latexguiclient.cpp.o


plugins/latex/CMakeFiles/kopete_latex.dir/latexconfig.cpp.o: plugins/latex/CMakeFiles/kopete_latex.dir/flags.make
plugins/latex/CMakeFiles/kopete_latex.dir/latexconfig.cpp.o: plugins/latex/latexconfig.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object plugins/latex/CMakeFiles/kopete_latex.dir/latexconfig.cpp.o"
	cd /home/harshcrop/kopete/build/plugins/latex && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kopete_latex.dir/latexconfig.cpp.o -c /home/harshcrop/kopete/build/plugins/latex/latexconfig.cpp

plugins/latex/CMakeFiles/kopete_latex.dir/latexconfig.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kopete_latex.dir/latexconfig.cpp.i"
	cd /home/harshcrop/kopete/build/plugins/latex && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/build/plugins/latex/latexconfig.cpp > CMakeFiles/kopete_latex.dir/latexconfig.cpp.i

plugins/latex/CMakeFiles/kopete_latex.dir/latexconfig.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kopete_latex.dir/latexconfig.cpp.s"
	cd /home/harshcrop/kopete/build/plugins/latex && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/build/plugins/latex/latexconfig.cpp -o CMakeFiles/kopete_latex.dir/latexconfig.cpp.s

plugins/latex/CMakeFiles/kopete_latex.dir/latexconfig.cpp.o.requires:

.PHONY : plugins/latex/CMakeFiles/kopete_latex.dir/latexconfig.cpp.o.requires

plugins/latex/CMakeFiles/kopete_latex.dir/latexconfig.cpp.o.provides: plugins/latex/CMakeFiles/kopete_latex.dir/latexconfig.cpp.o.requires
	$(MAKE) -f plugins/latex/CMakeFiles/kopete_latex.dir/build.make plugins/latex/CMakeFiles/kopete_latex.dir/latexconfig.cpp.o.provides.build
.PHONY : plugins/latex/CMakeFiles/kopete_latex.dir/latexconfig.cpp.o.provides

plugins/latex/CMakeFiles/kopete_latex.dir/latexconfig.cpp.o.provides.build: plugins/latex/CMakeFiles/kopete_latex.dir/latexconfig.cpp.o


# Object files for target kopete_latex
kopete_latex_OBJECTS = \
"CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.o" \
"CMakeFiles/kopete_latex.dir/latexplugin.cpp.o" \
"CMakeFiles/kopete_latex.dir/latexguiclient.cpp.o" \
"CMakeFiles/kopete_latex.dir/latexconfig.cpp.o"

# External object files for target kopete_latex
kopete_latex_EXTERNAL_OBJECTS =

lib/kopete_latex.so: plugins/latex/CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.o
lib/kopete_latex.so: plugins/latex/CMakeFiles/kopete_latex.dir/latexplugin.cpp.o
lib/kopete_latex.so: plugins/latex/CMakeFiles/kopete_latex.dir/latexguiclient.cpp.o
lib/kopete_latex.so: plugins/latex/CMakeFiles/kopete_latex.dir/latexconfig.cpp.o
lib/kopete_latex.so: plugins/latex/CMakeFiles/kopete_latex.dir/build.make
lib/kopete_latex.so: lib/libkopete.so.4.14.16
lib/kopete_latex.so: /usr/lib/libkdeui.so.5.14.16
lib/kopete_latex.so: /usr/lib/x86_64-linux-gnu/libQtSvg.so
lib/kopete_latex.so: /usr/lib/x86_64-linux-gnu/libQtGui.so
lib/kopete_latex.so: /usr/lib/libkdecore.so.5.14.16
lib/kopete_latex.so: /usr/lib/x86_64-linux-gnu/libQtDBus.so
lib/kopete_latex.so: /usr/lib/x86_64-linux-gnu/libQtCore.so
lib/kopete_latex.so: plugins/latex/CMakeFiles/kopete_latex.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared module ../../lib/kopete_latex.so"
	cd /home/harshcrop/kopete/build/plugins/latex && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kopete_latex.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/latex/CMakeFiles/kopete_latex.dir/build: lib/kopete_latex.so

.PHONY : plugins/latex/CMakeFiles/kopete_latex.dir/build

plugins/latex/CMakeFiles/kopete_latex.dir/requires: plugins/latex/CMakeFiles/kopete_latex.dir/kopete_latex_automoc.cpp.o.requires
plugins/latex/CMakeFiles/kopete_latex.dir/requires: plugins/latex/CMakeFiles/kopete_latex.dir/latexplugin.cpp.o.requires
plugins/latex/CMakeFiles/kopete_latex.dir/requires: plugins/latex/CMakeFiles/kopete_latex.dir/latexguiclient.cpp.o.requires
plugins/latex/CMakeFiles/kopete_latex.dir/requires: plugins/latex/CMakeFiles/kopete_latex.dir/latexconfig.cpp.o.requires

.PHONY : plugins/latex/CMakeFiles/kopete_latex.dir/requires

plugins/latex/CMakeFiles/kopete_latex.dir/clean:
	cd /home/harshcrop/kopete/build/plugins/latex && $(CMAKE_COMMAND) -P CMakeFiles/kopete_latex.dir/cmake_clean.cmake
.PHONY : plugins/latex/CMakeFiles/kopete_latex.dir/clean

plugins/latex/CMakeFiles/kopete_latex.dir/depend: plugins/latex/latexconfig.h
plugins/latex/CMakeFiles/kopete_latex.dir/depend: plugins/latex/latexconfig.cpp
	cd /home/harshcrop/kopete/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/harshcrop/kopete /home/harshcrop/kopete/plugins/latex /home/harshcrop/kopete/build /home/harshcrop/kopete/build/plugins/latex /home/harshcrop/kopete/build/plugins/latex/CMakeFiles/kopete_latex.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/latex/CMakeFiles/kopete_latex.dir/depend
