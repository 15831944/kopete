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

# Utility rule file for kopete_emailwindow_automoc.

# Include the progress variables for this target.
include kopete/chatwindow/CMakeFiles/kopete_emailwindow_automoc.dir/progress.make

kopete/chatwindow/CMakeFiles/kopete_emailwindow_automoc:
	cd /home/harshcrop/kopete/build/kopete/chatwindow && /usr/bin/automoc4 /home/harshcrop/kopete/build/kopete/chatwindow/kopete_emailwindow_automoc.cpp /home/harshcrop/kopete/kopete/chatwindow /home/harshcrop/kopete/build/kopete/chatwindow /usr/lib/x86_64-linux-gnu/qt4/bin/moc /usr/bin/cmake

kopete_emailwindow_automoc: kopete/chatwindow/CMakeFiles/kopete_emailwindow_automoc
kopete_emailwindow_automoc: kopete/chatwindow/CMakeFiles/kopete_emailwindow_automoc.dir/build.make

.PHONY : kopete_emailwindow_automoc

# Rule to build all files generated by this target.
kopete/chatwindow/CMakeFiles/kopete_emailwindow_automoc.dir/build: kopete_emailwindow_automoc

.PHONY : kopete/chatwindow/CMakeFiles/kopete_emailwindow_automoc.dir/build

kopete/chatwindow/CMakeFiles/kopete_emailwindow_automoc.dir/clean:
	cd /home/harshcrop/kopete/build/kopete/chatwindow && $(CMAKE_COMMAND) -P CMakeFiles/kopete_emailwindow_automoc.dir/cmake_clean.cmake
.PHONY : kopete/chatwindow/CMakeFiles/kopete_emailwindow_automoc.dir/clean

kopete/chatwindow/CMakeFiles/kopete_emailwindow_automoc.dir/depend:
	cd /home/harshcrop/kopete/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/harshcrop/kopete /home/harshcrop/kopete/kopete/chatwindow /home/harshcrop/kopete/build /home/harshcrop/kopete/build/kopete/chatwindow /home/harshcrop/kopete/build/kopete/chatwindow/CMakeFiles/kopete_emailwindow_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : kopete/chatwindow/CMakeFiles/kopete_emailwindow_automoc.dir/depend

