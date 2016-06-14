# Install script for directory: /home/harshcrop/kopete/styles/Clear/Contents/Resources/images

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
   "/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/body-background.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/footer-outbound-right.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/body-inbound-arrow.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/header-inbound-background.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/body-inbound-avatar.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/header-inbound-left.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/body-inbound-background.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/header-inbound-right.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/body-inbound-left.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/header-outbound-background.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/body-inbound-right.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/header-outbound-left.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/body-outbound-arrow.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/header-outbound-right.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/body-outbound-avatar.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/icon-action.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/body-outbound-left.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/icon-highlighted.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/body-outbound-right.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/icon-internal.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/footer-inbound-background.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/icon-me.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/footer-inbound-left.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/icon-time.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/footer-inbound-right.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/icon-you.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/footer-outbound-background.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/footer-outbound-left.png;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/state-sending.gif;/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images/state-error.png")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/kde4/apps/kopete/styles/Clear/Contents/Resources/images" TYPE FILE FILES
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/body-background.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/footer-outbound-right.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/body-inbound-arrow.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/header-inbound-background.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/body-inbound-avatar.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/header-inbound-left.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/body-inbound-background.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/header-inbound-right.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/body-inbound-left.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/header-outbound-background.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/body-inbound-right.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/header-outbound-left.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/body-outbound-arrow.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/header-outbound-right.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/body-outbound-avatar.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/icon-action.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/body-outbound-left.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/icon-highlighted.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/body-outbound-right.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/icon-internal.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/footer-inbound-background.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/icon-me.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/footer-inbound-left.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/icon-time.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/footer-inbound-right.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/icon-you.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/footer-outbound-background.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/footer-outbound-left.png"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/state-sending.gif"
    "/home/harshcrop/kopete/styles/Clear/Contents/Resources/images/state-error.png"
    )
endif()

