# Install script for directory: /home/harshcrop/kopete/kopete/kconf_update

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
   "/usr/share/kde4/apps/kconf_update/kopete-account-kconf_update.sh;/usr/share/kde4/apps/kconf_update/kopete-jabberpriorityaddition-kconf_update.sh;/usr/share/kde4/apps/kconf_update/kopete-pluginloader2.sh;/usr/share/kde4/apps/kconf_update/kopete-jabberproxytype-kconf_update.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/kde4/apps/kconf_update" TYPE PROGRAM FILES
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-account-kconf_update.sh"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-jabberpriorityaddition-kconf_update.sh"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-pluginloader2.sh"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-jabberproxytype-kconf_update.sh"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/kde4/apps/kconf_update/kopete-account-kconf_update.upd;/usr/share/kde4/apps/kconf_update/kopete-jabberproxytype-kconf_update.upd;/usr/share/kde4/apps/kconf_update/kopete-jabberpriorityaddition-kconf_update.upd;/usr/share/kde4/apps/kconf_update/kopete-pluginloader2.upd")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/kde4/apps/kconf_update" TYPE FILE FILES
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-account-kconf_update.upd"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-jabberproxytype-kconf_update.upd"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-jabberpriorityaddition-kconf_update.upd"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-pluginloader2.upd"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/kde4/apps/kconf_update/kopete-pluginloader.upd;/usr/share/kde4/apps/kconf_update/kopete-nameTracking.upd;/usr/share/kde4/apps/kconf_update/kopete-initialstatus.upd;/usr/share/kde4/apps/kconf_update/kopete-gaim_to_pidgin_style.upd;/usr/share/kde4/apps/kconf_update/kopete-update_yahoo_server.upd;/usr/share/kde4/apps/kconf_update/kopete-update_icq_server.upd;/usr/share/kde4/apps/kconf_update/kopete-update_icq_ssl.upd")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/kde4/apps/kconf_update" TYPE FILE FILES
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-pluginloader.upd"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-nameTracking.upd"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-initialstatus.upd"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-gaim_to_pidgin_style.upd"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-update_yahoo_server.upd"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-update_icq_server.upd"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-update_icq_ssl.upd"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/kde4/apps/kconf_update/kopete-pluginloader.pl;/usr/share/kde4/apps/kconf_update/kopete-update_yahoo_server.pl;/usr/share/kde4/apps/kconf_update/kopete-update_icq_server.pl;/usr/share/kde4/apps/kconf_update/kopete-update_icq_ssl.pl;/usr/share/kde4/apps/kconf_update/kopete-account-0.10.pl;/usr/share/kde4/apps/kconf_update/kopete-initialstatus.pl;/usr/share/kde4/apps/kconf_update/kopete-gaim_to_pidgin_style.pl")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/kde4/apps/kconf_update" TYPE PROGRAM FILES
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-pluginloader.pl"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-update_yahoo_server.pl"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-update_icq_server.pl"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-update_icq_ssl.pl"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-account-0.10.pl"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-initialstatus.pl"
    "/home/harshcrop/kopete/kopete/kconf_update/kopete-gaim_to_pidgin_style.pl"
    )
endif()

