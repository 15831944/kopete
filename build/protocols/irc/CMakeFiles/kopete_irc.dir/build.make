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
include protocols/irc/CMakeFiles/kopete_irc.dir/depend.make

# Include the progress variables for this target.
include protocols/irc/CMakeFiles/kopete_irc.dir/progress.make

# Include the compile flags for this target's objects.
include protocols/irc/CMakeFiles/kopete_irc.dir/flags.make

protocols/irc/ui_ircaddui.h: ../protocols/irc/ircaddui.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_ircaddui.h"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/cmake -DKDE4_HEADER:BOOL=ON -DKDE_UIC_EXECUTABLE:FILEPATH=/usr/lib/x86_64-linux-gnu/qt4/bin/uic -DKDE_UIC_FILE:FILEPATH=/home/harshcrop/kopete/protocols/irc/ircaddui.ui -DKDE_UIC_H_FILE:FILEPATH=/home/harshcrop/kopete/build/protocols/irc/ui_ircaddui.h -DKDE_UIC_BASENAME:STRING=ircaddui -P /usr/share/kde4/apps/cmake/modules/kde4uic.cmake

protocols/irc/ui_ircaccountpreferences.h: ../protocols/irc/ircaccountpreferences.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ui_ircaccountpreferences.h"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/cmake -DKDE4_HEADER:BOOL=ON -DKDE_UIC_EXECUTABLE:FILEPATH=/usr/lib/x86_64-linux-gnu/qt4/bin/uic -DKDE_UIC_FILE:FILEPATH=/home/harshcrop/kopete/protocols/irc/ircaccountpreferences.ui -DKDE_UIC_H_FILE:FILEPATH=/home/harshcrop/kopete/build/protocols/irc/ui_ircaccountpreferences.h -DKDE_UIC_BASENAME:STRING=ircaccountpreferences -P /usr/share/kde4/apps/cmake/modules/kde4uic.cmake

protocols/irc/CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.o: protocols/irc/CMakeFiles/kopete_irc.dir/flags.make
protocols/irc/CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.o: protocols/irc/kopete_irc_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object protocols/irc/CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.o"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.o -c /home/harshcrop/kopete/build/protocols/irc/kopete_irc_automoc.cpp

protocols/irc/CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.i"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/build/protocols/irc/kopete_irc_automoc.cpp > CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.i

protocols/irc/CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.s"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/build/protocols/irc/kopete_irc_automoc.cpp -o CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.s

protocols/irc/CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.o.requires:

.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.o.requires

protocols/irc/CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.o.provides: protocols/irc/CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.o.requires
	$(MAKE) -f protocols/irc/CMakeFiles/kopete_irc.dir/build.make protocols/irc/CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.o.provides.build
.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.o.provides

protocols/irc/CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.o.provides.build: protocols/irc/CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.o


protocols/irc/CMakeFiles/kopete_irc.dir/ircprotocol.cpp.o: protocols/irc/CMakeFiles/kopete_irc.dir/flags.make
protocols/irc/CMakeFiles/kopete_irc.dir/ircprotocol.cpp.o: ../protocols/irc/ircprotocol.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object protocols/irc/CMakeFiles/kopete_irc.dir/ircprotocol.cpp.o"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kopete_irc.dir/ircprotocol.cpp.o -c /home/harshcrop/kopete/protocols/irc/ircprotocol.cpp

protocols/irc/CMakeFiles/kopete_irc.dir/ircprotocol.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kopete_irc.dir/ircprotocol.cpp.i"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/protocols/irc/ircprotocol.cpp > CMakeFiles/kopete_irc.dir/ircprotocol.cpp.i

protocols/irc/CMakeFiles/kopete_irc.dir/ircprotocol.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kopete_irc.dir/ircprotocol.cpp.s"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/protocols/irc/ircprotocol.cpp -o CMakeFiles/kopete_irc.dir/ircprotocol.cpp.s

protocols/irc/CMakeFiles/kopete_irc.dir/ircprotocol.cpp.o.requires:

.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/ircprotocol.cpp.o.requires

protocols/irc/CMakeFiles/kopete_irc.dir/ircprotocol.cpp.o.provides: protocols/irc/CMakeFiles/kopete_irc.dir/ircprotocol.cpp.o.requires
	$(MAKE) -f protocols/irc/CMakeFiles/kopete_irc.dir/build.make protocols/irc/CMakeFiles/kopete_irc.dir/ircprotocol.cpp.o.provides.build
.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/ircprotocol.cpp.o.provides

protocols/irc/CMakeFiles/kopete_irc.dir/ircprotocol.cpp.o.provides.build: protocols/irc/CMakeFiles/kopete_irc.dir/ircprotocol.cpp.o


protocols/irc/CMakeFiles/kopete_irc.dir/irccontact.cpp.o: protocols/irc/CMakeFiles/kopete_irc.dir/flags.make
protocols/irc/CMakeFiles/kopete_irc.dir/irccontact.cpp.o: ../protocols/irc/irccontact.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object protocols/irc/CMakeFiles/kopete_irc.dir/irccontact.cpp.o"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kopete_irc.dir/irccontact.cpp.o -c /home/harshcrop/kopete/protocols/irc/irccontact.cpp

protocols/irc/CMakeFiles/kopete_irc.dir/irccontact.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kopete_irc.dir/irccontact.cpp.i"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/protocols/irc/irccontact.cpp > CMakeFiles/kopete_irc.dir/irccontact.cpp.i

protocols/irc/CMakeFiles/kopete_irc.dir/irccontact.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kopete_irc.dir/irccontact.cpp.s"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/protocols/irc/irccontact.cpp -o CMakeFiles/kopete_irc.dir/irccontact.cpp.s

protocols/irc/CMakeFiles/kopete_irc.dir/irccontact.cpp.o.requires:

.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/irccontact.cpp.o.requires

protocols/irc/CMakeFiles/kopete_irc.dir/irccontact.cpp.o.provides: protocols/irc/CMakeFiles/kopete_irc.dir/irccontact.cpp.o.requires
	$(MAKE) -f protocols/irc/CMakeFiles/kopete_irc.dir/build.make protocols/irc/CMakeFiles/kopete_irc.dir/irccontact.cpp.o.provides.build
.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/irccontact.cpp.o.provides

protocols/irc/CMakeFiles/kopete_irc.dir/irccontact.cpp.o.provides.build: protocols/irc/CMakeFiles/kopete_irc.dir/irccontact.cpp.o


protocols/irc/CMakeFiles/kopete_irc.dir/ircaccount.cpp.o: protocols/irc/CMakeFiles/kopete_irc.dir/flags.make
protocols/irc/CMakeFiles/kopete_irc.dir/ircaccount.cpp.o: ../protocols/irc/ircaccount.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object protocols/irc/CMakeFiles/kopete_irc.dir/ircaccount.cpp.o"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kopete_irc.dir/ircaccount.cpp.o -c /home/harshcrop/kopete/protocols/irc/ircaccount.cpp

protocols/irc/CMakeFiles/kopete_irc.dir/ircaccount.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kopete_irc.dir/ircaccount.cpp.i"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/protocols/irc/ircaccount.cpp > CMakeFiles/kopete_irc.dir/ircaccount.cpp.i

protocols/irc/CMakeFiles/kopete_irc.dir/ircaccount.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kopete_irc.dir/ircaccount.cpp.s"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/protocols/irc/ircaccount.cpp -o CMakeFiles/kopete_irc.dir/ircaccount.cpp.s

protocols/irc/CMakeFiles/kopete_irc.dir/ircaccount.cpp.o.requires:

.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/ircaccount.cpp.o.requires

protocols/irc/CMakeFiles/kopete_irc.dir/ircaccount.cpp.o.provides: protocols/irc/CMakeFiles/kopete_irc.dir/ircaccount.cpp.o.requires
	$(MAKE) -f protocols/irc/CMakeFiles/kopete_irc.dir/build.make protocols/irc/CMakeFiles/kopete_irc.dir/ircaccount.cpp.o.provides.build
.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/ircaccount.cpp.o.provides

protocols/irc/CMakeFiles/kopete_irc.dir/ircaccount.cpp.o.provides.build: protocols/irc/CMakeFiles/kopete_irc.dir/ircaccount.cpp.o


protocols/irc/CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.o: protocols/irc/CMakeFiles/kopete_irc.dir/flags.make
protocols/irc/CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.o: ../protocols/irc/ircaddcontactpage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object protocols/irc/CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.o"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.o -c /home/harshcrop/kopete/protocols/irc/ircaddcontactpage.cpp

protocols/irc/CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.i"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/protocols/irc/ircaddcontactpage.cpp > CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.i

protocols/irc/CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.s"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/protocols/irc/ircaddcontactpage.cpp -o CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.s

protocols/irc/CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.o.requires:

.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.o.requires

protocols/irc/CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.o.provides: protocols/irc/CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.o.requires
	$(MAKE) -f protocols/irc/CMakeFiles/kopete_irc.dir/build.make protocols/irc/CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.o.provides.build
.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.o.provides

protocols/irc/CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.o.provides.build: protocols/irc/CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.o


protocols/irc/CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.o: protocols/irc/CMakeFiles/kopete_irc.dir/flags.make
protocols/irc/CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.o: ../protocols/irc/irceditaccountwidget.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object protocols/irc/CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.o"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.o -c /home/harshcrop/kopete/protocols/irc/irceditaccountwidget.cpp

protocols/irc/CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.i"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/protocols/irc/irceditaccountwidget.cpp > CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.i

protocols/irc/CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.s"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/protocols/irc/irceditaccountwidget.cpp -o CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.s

protocols/irc/CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.o.requires:

.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.o.requires

protocols/irc/CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.o.provides: protocols/irc/CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.o.requires
	$(MAKE) -f protocols/irc/CMakeFiles/kopete_irc.dir/build.make protocols/irc/CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.o.provides.build
.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.o.provides

protocols/irc/CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.o.provides.build: protocols/irc/CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.o


protocols/irc/CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.o: protocols/irc/CMakeFiles/kopete_irc.dir/flags.make
protocols/irc/CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.o: ../protocols/irc/ircfakeserver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object protocols/irc/CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.o"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.o -c /home/harshcrop/kopete/protocols/irc/ircfakeserver.cpp

protocols/irc/CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.i"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/protocols/irc/ircfakeserver.cpp > CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.i

protocols/irc/CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.s"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/protocols/irc/ircfakeserver.cpp -o CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.s

protocols/irc/CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.o.requires:

.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.o.requires

protocols/irc/CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.o.provides: protocols/irc/CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.o.requires
	$(MAKE) -f protocols/irc/CMakeFiles/kopete_irc.dir/build.make protocols/irc/CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.o.provides.build
.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.o.provides

protocols/irc/CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.o.provides.build: protocols/irc/CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.o


protocols/irc/CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.o: protocols/irc/CMakeFiles/kopete_irc.dir/flags.make
protocols/irc/CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.o: ../protocols/irc/ircincomingmessage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object protocols/irc/CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.o"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.o -c /home/harshcrop/kopete/protocols/irc/ircincomingmessage.cpp

protocols/irc/CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.i"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/protocols/irc/ircincomingmessage.cpp > CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.i

protocols/irc/CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.s"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/protocols/irc/ircincomingmessage.cpp -o CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.s

protocols/irc/CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.o.requires:

.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.o.requires

protocols/irc/CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.o.provides: protocols/irc/CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.o.requires
	$(MAKE) -f protocols/irc/CMakeFiles/kopete_irc.dir/build.make protocols/irc/CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.o.provides.build
.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.o.provides

protocols/irc/CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.o.provides.build: protocols/irc/CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.o


protocols/irc/CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.o: protocols/irc/CMakeFiles/kopete_irc.dir/flags.make
protocols/irc/CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.o: ../protocols/irc/ui/ircwebcamdialog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object protocols/irc/CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.o"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.o -c /home/harshcrop/kopete/protocols/irc/ui/ircwebcamdialog.cpp

protocols/irc/CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.i"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/harshcrop/kopete/protocols/irc/ui/ircwebcamdialog.cpp > CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.i

protocols/irc/CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.s"
	cd /home/harshcrop/kopete/build/protocols/irc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/harshcrop/kopete/protocols/irc/ui/ircwebcamdialog.cpp -o CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.s

protocols/irc/CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.o.requires:

.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.o.requires

protocols/irc/CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.o.provides: protocols/irc/CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.o.requires
	$(MAKE) -f protocols/irc/CMakeFiles/kopete_irc.dir/build.make protocols/irc/CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.o.provides.build
.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.o.provides

protocols/irc/CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.o.provides.build: protocols/irc/CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.o


# Object files for target kopete_irc
kopete_irc_OBJECTS = \
"CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.o" \
"CMakeFiles/kopete_irc.dir/ircprotocol.cpp.o" \
"CMakeFiles/kopete_irc.dir/irccontact.cpp.o" \
"CMakeFiles/kopete_irc.dir/ircaccount.cpp.o" \
"CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.o" \
"CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.o" \
"CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.o" \
"CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.o" \
"CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.o"

# External object files for target kopete_irc
kopete_irc_EXTERNAL_OBJECTS =

lib/kopete_irc.so: protocols/irc/CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.o
lib/kopete_irc.so: protocols/irc/CMakeFiles/kopete_irc.dir/ircprotocol.cpp.o
lib/kopete_irc.so: protocols/irc/CMakeFiles/kopete_irc.dir/irccontact.cpp.o
lib/kopete_irc.so: protocols/irc/CMakeFiles/kopete_irc.dir/ircaccount.cpp.o
lib/kopete_irc.so: protocols/irc/CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.o
lib/kopete_irc.so: protocols/irc/CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.o
lib/kopete_irc.so: protocols/irc/CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.o
lib/kopete_irc.so: protocols/irc/CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.o
lib/kopete_irc.so: protocols/irc/CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.o
lib/kopete_irc.so: protocols/irc/CMakeFiles/kopete_irc.dir/build.make
lib/kopete_irc.so: lib/libkopete.so.4.14.16
lib/kopete_irc.so: lib/libkopete_videodevice.so.4.14.16
lib/kopete_irc.so: /usr/lib/libkio.so.5.14.16
lib/kopete_irc.so: /usr/lib/libkdeui.so.5.14.16
lib/kopete_irc.so: /usr/lib/x86_64-linux-gnu/libQtSvg.so
lib/kopete_irc.so: /usr/lib/libkdecore.so.5.14.16
lib/kopete_irc.so: /usr/lib/x86_64-linux-gnu/libQtDBus.so
lib/kopete_irc.so: /usr/lib/x86_64-linux-gnu/libQtCore.so
lib/kopete_irc.so: /usr/lib/x86_64-linux-gnu/libQtNetwork.so
lib/kopete_irc.so: /usr/lib/x86_64-linux-gnu/libQtXml.so
lib/kopete_irc.so: /usr/lib/x86_64-linux-gnu/libQtGui.so
lib/kopete_irc.so: protocols/irc/CMakeFiles/kopete_irc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/harshcrop/kopete/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX shared module ../../lib/kopete_irc.so"
	cd /home/harshcrop/kopete/build/protocols/irc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kopete_irc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
protocols/irc/CMakeFiles/kopete_irc.dir/build: lib/kopete_irc.so

.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/build

protocols/irc/CMakeFiles/kopete_irc.dir/requires: protocols/irc/CMakeFiles/kopete_irc.dir/kopete_irc_automoc.cpp.o.requires
protocols/irc/CMakeFiles/kopete_irc.dir/requires: protocols/irc/CMakeFiles/kopete_irc.dir/ircprotocol.cpp.o.requires
protocols/irc/CMakeFiles/kopete_irc.dir/requires: protocols/irc/CMakeFiles/kopete_irc.dir/irccontact.cpp.o.requires
protocols/irc/CMakeFiles/kopete_irc.dir/requires: protocols/irc/CMakeFiles/kopete_irc.dir/ircaccount.cpp.o.requires
protocols/irc/CMakeFiles/kopete_irc.dir/requires: protocols/irc/CMakeFiles/kopete_irc.dir/ircaddcontactpage.cpp.o.requires
protocols/irc/CMakeFiles/kopete_irc.dir/requires: protocols/irc/CMakeFiles/kopete_irc.dir/irceditaccountwidget.cpp.o.requires
protocols/irc/CMakeFiles/kopete_irc.dir/requires: protocols/irc/CMakeFiles/kopete_irc.dir/ircfakeserver.cpp.o.requires
protocols/irc/CMakeFiles/kopete_irc.dir/requires: protocols/irc/CMakeFiles/kopete_irc.dir/ircincomingmessage.cpp.o.requires
protocols/irc/CMakeFiles/kopete_irc.dir/requires: protocols/irc/CMakeFiles/kopete_irc.dir/ui/ircwebcamdialog.cpp.o.requires

.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/requires

protocols/irc/CMakeFiles/kopete_irc.dir/clean:
	cd /home/harshcrop/kopete/build/protocols/irc && $(CMAKE_COMMAND) -P CMakeFiles/kopete_irc.dir/cmake_clean.cmake
.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/clean

protocols/irc/CMakeFiles/kopete_irc.dir/depend: protocols/irc/ui_ircaddui.h
protocols/irc/CMakeFiles/kopete_irc.dir/depend: protocols/irc/ui_ircaccountpreferences.h
	cd /home/harshcrop/kopete/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/harshcrop/kopete /home/harshcrop/kopete/protocols/irc /home/harshcrop/kopete/build /home/harshcrop/kopete/build/protocols/irc /home/harshcrop/kopete/build/protocols/irc/CMakeFiles/kopete_irc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : protocols/irc/CMakeFiles/kopete_irc.dir/depend
