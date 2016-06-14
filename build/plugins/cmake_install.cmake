# Install script for directory: /home/harshcrop/kopete/plugins

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
  include("/home/harshcrop/kopete/build/plugins/latex/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/plugins/autoreplace/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/plugins/history/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/plugins/history2/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/plugins/contactnotes/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/plugins/translator/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/plugins/nowlistening/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/plugins/texteffect/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/plugins/highlight/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/plugins/addbookmarks/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/plugins/privacy/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/plugins/urlpicpreview/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/plugins/statistics/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/plugins/pipes/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/plugins/webpresence/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/plugins/otr/cmake_install.cmake")

endif()

