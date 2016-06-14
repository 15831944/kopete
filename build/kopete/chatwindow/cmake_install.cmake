# Install script for directory: /home/harshcrop/kopete/kopete/chatwindow

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
  foreach(file
      "$ENV{DESTDIR}/usr/lib/libkopetechatwindow_shared.so.1.0.0"
      "$ENV{DESTDIR}/usr/lib/libkopetechatwindow_shared.so.1"
      "$ENV{DESTDIR}/usr/lib/libkopetechatwindow_shared.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/libkopetechatwindow_shared.so.1.0.0;/usr/lib/libkopetechatwindow_shared.so.1;/usr/lib/libkopetechatwindow_shared.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib" TYPE SHARED_LIBRARY FILES
    "/home/harshcrop/kopete/build/lib/libkopetechatwindow_shared.so.1.0.0"
    "/home/harshcrop/kopete/build/lib/libkopetechatwindow_shared.so.1"
    "/home/harshcrop/kopete/build/lib/libkopetechatwindow_shared.so"
    )
  foreach(file
      "$ENV{DESTDIR}/usr/lib/libkopetechatwindow_shared.so.1.0.0"
      "$ENV{DESTDIR}/usr/lib/libkopetechatwindow_shared.so.1"
      "$ENV{DESTDIR}/usr/lib/libkopetechatwindow_shared.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/harshcrop/kopete/build/kopete/chatwindow:/home/harshcrop/kopete/build/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/kde4/libchattexteditpart.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/kde4/libchattexteditpart.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/kde4/libchattexteditpart.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/kde4/libchattexteditpart.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/kde4" TYPE MODULE FILES "/home/harshcrop/kopete/build/lib/libchattexteditpart.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/kde4/libchattexteditpart.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/kde4/libchattexteditpart.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/kde4/libchattexteditpart.so"
         OLD_RPATH "/home/harshcrop/kopete/build/kopete/chatwindow:/home/harshcrop/kopete/build/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/kde4/libchattexteditpart.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/kde4/kopete_chatwindow.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/kde4/kopete_chatwindow.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/kde4/kopete_chatwindow.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/kde4/kopete_chatwindow.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/kde4" TYPE MODULE FILES "/home/harshcrop/kopete/build/lib/kopete_chatwindow.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/kde4/kopete_chatwindow.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/kde4/kopete_chatwindow.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/kde4/kopete_chatwindow.so"
         OLD_RPATH "/home/harshcrop/kopete/build/kopete/chatwindow:/home/harshcrop/kopete/build/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/kde4/kopete_chatwindow.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/kde4/kopete_emailwindow.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/kde4/kopete_emailwindow.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/lib/kde4/kopete_emailwindow.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/lib/kde4/kopete_emailwindow.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/lib/kde4" TYPE MODULE FILES "/home/harshcrop/kopete/build/lib/kopete_emailwindow.so")
  if(EXISTS "$ENV{DESTDIR}/usr/lib/kde4/kopete_emailwindow.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/lib/kde4/kopete_emailwindow.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/usr/lib/kde4/kopete_emailwindow.so"
         OLD_RPATH "/home/harshcrop/kopete/build/kopete/chatwindow:/home/harshcrop/kopete/build/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/lib/kde4/kopete_emailwindow.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/kde4/apps/kopeterichtexteditpart/kopeterichtexteditpartfull.rc")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/kde4/apps/kopeterichtexteditpart" TYPE FILE FILES "/home/harshcrop/kopete/kopete/chatwindow/kopeterichtexteditpartfull.rc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/kde4/services/chatwindow.desktop;/usr/share/kde4/services/emailwindow.desktop")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/kde4/services" TYPE FILE FILES
    "/home/harshcrop/kopete/kopete/chatwindow/chatwindow.desktop"
    "/home/harshcrop/kopete/kopete/chatwindow/emailwindow.desktop"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/share/kde4/apps/kopete/kopetechatwindow.rc;/usr/share/kde4/apps/kopete/kopeteemailwindow.rc")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/share/kde4/apps/kopete" TYPE FILE FILES
    "/home/harshcrop/kopete/kopete/chatwindow/kopetechatwindow.rc"
    "/home/harshcrop/kopete/kopete/chatwindow/kopeteemailwindow.rc"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/harshcrop/kopete/build/kopete/chatwindow/a11y/cmake_install.cmake")

endif()

