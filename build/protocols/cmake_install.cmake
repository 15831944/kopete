# Install script for directory: /home/harshcrop/kopete/protocols

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/harshcrop/kopete/build/protocols/wlm/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/protocols/oscar/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/protocols/qq/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/protocols/irc/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/protocols/winpopup/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/protocols/gadu/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/protocols/sms/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/protocols/skype/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/protocols/jabber/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/protocols/groupwise/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/protocols/bonjour/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/protocols/meanwhile/cmake_install.cmake")

endif()

