# Install script for directory: /home/harshcrop/kopete/styles/Konqi/Contents/Resources

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/kde4/apps/kopete/styles/Konqi/Contents/Resources/main.css;/usr/share/kde4/apps/kopete/styles/Konqi/Contents/Resources/Footer.html;/usr/share/kde4/apps/kopete/styles/Konqi/Contents/Resources/Header.html;/usr/share/kde4/apps/kopete/styles/Konqi/Contents/Resources/Status.html;/usr/share/kde4/apps/kopete/styles/Konqi/Contents/Resources/puce.png")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/kde4/apps/kopete/styles/Konqi/Contents/Resources" TYPE FILE FILES
    "/home/harshcrop/kopete/styles/Konqi/Contents/Resources/main.css"
    "/home/harshcrop/kopete/styles/Konqi/Contents/Resources/Footer.html"
    "/home/harshcrop/kopete/styles/Konqi/Contents/Resources/Header.html"
    "/home/harshcrop/kopete/styles/Konqi/Contents/Resources/Status.html"
    "/home/harshcrop/kopete/styles/Konqi/Contents/Resources/puce.png"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/harshcrop/kopete/build/styles/Konqi/Contents/Resources/Incoming/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/styles/Konqi/Contents/Resources/Outgoing/cmake_install.cmake")
  include("/home/harshcrop/kopete/build/styles/Konqi/Contents/Resources/Variants/cmake_install.cmake")

endif()

