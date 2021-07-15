# Install script for directory: /home/sgx/graphene/Tools/gsc/test/mumble/plugins

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/link/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblink.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblink.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblink.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/liblink.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/liblink.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblink.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblink.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblink.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/amongus/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libamongus.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libamongus.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libamongus.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libamongus.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libamongus.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libamongus.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libamongus.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libamongus.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/aoc/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libaoc.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libaoc.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libaoc.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libaoc.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libaoc.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libaoc.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libaoc.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libaoc.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/arma2/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libarma2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libarma2.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libarma2.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libarma2.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libarma2.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libarma2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libarma2.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libarma2.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/bf1/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf1.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf1.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf1.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libbf1.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libbf1.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf1.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf1.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf1.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/bf1942/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf1942.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf1942.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf1942.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libbf1942.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libbf1942.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf1942.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf1942.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf1942.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/bf2/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf2.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf2.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libbf2.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libbf2.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf2.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf2.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/bf2142/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf2142.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf2142.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf2142.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libbf2142.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libbf2142.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf2142.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf2142.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf2142.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/bf3/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf3.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf3.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf3.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libbf3.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libbf3.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf3.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf3.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf3.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/bf4/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf4.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf4.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf4.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libbf4.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libbf4.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf4.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf4.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf4.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/bf4_x86/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf4_x86.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf4_x86.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf4_x86.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libbf4_x86.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libbf4_x86.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf4_x86.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf4_x86.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbf4_x86.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/bfbc2/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbfbc2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbfbc2.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbfbc2.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libbfbc2.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libbfbc2.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbfbc2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbfbc2.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbfbc2.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/bfheroes/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbfheroes.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbfheroes.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbfheroes.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libbfheroes.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libbfheroes.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbfheroes.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbfheroes.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbfheroes.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/blacklight/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libblacklight.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libblacklight.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libblacklight.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libblacklight.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libblacklight.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libblacklight.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libblacklight.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libblacklight.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/borderlands/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libborderlands.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libborderlands.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libborderlands.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libborderlands.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libborderlands.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libborderlands.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libborderlands.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libborderlands.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/borderlands2/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libborderlands2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libborderlands2.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libborderlands2.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libborderlands2.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libborderlands2.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libborderlands2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libborderlands2.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libborderlands2.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/breach/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbreach.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbreach.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbreach.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libbreach.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libbreach.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbreach.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbreach.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libbreach.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/cod2/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod2.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod2.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libcod2.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libcod2.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod2.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod2.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/cod4/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod4.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod4.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod4.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libcod4.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libcod4.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod4.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod4.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod4.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/cod5/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod5.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod5.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod5.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libcod5.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libcod5.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod5.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod5.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcod5.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/codmw2/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcodmw2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcodmw2.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcodmw2.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libcodmw2.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libcodmw2.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcodmw2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcodmw2.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcodmw2.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/codmw2so/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcodmw2so.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcodmw2so.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcodmw2so.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libcodmw2so.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libcodmw2so.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcodmw2so.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcodmw2so.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcodmw2so.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/cs/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcs.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcs.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcs.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libcs.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libcs.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcs.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcs.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libcs.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/css/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/dods/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/dys/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libdys.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libdys.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libdys.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libdys.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libdys.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libdys.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libdys.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libdys.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/etqw/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libetqw.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libetqw.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libetqw.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libetqw.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libetqw.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libetqw.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libetqw.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libetqw.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/ffxiv/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libffxiv.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libffxiv.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libffxiv.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libffxiv.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libffxiv.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libffxiv.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libffxiv.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libffxiv.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/ffxiv_x64/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libffxiv_x64.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libffxiv_x64.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libffxiv_x64.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libffxiv_x64.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libffxiv_x64.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libffxiv_x64.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libffxiv_x64.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libffxiv_x64.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/gmod/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgmod.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgmod.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgmod.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libgmod.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libgmod.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgmod.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgmod.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgmod.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/gtaiv/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtaiv.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtaiv.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtaiv.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libgtaiv.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libgtaiv.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtaiv.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtaiv.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtaiv.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/gtasa/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtasa.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtasa.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtasa.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libgtasa.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libgtasa.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtasa.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtasa.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtasa.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/gtav/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtav.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtav.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtav.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libgtav.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libgtav.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtav.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtav.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgtav.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/gw/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgw.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgw.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgw.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libgw.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libgw.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgw.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgw.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libgw.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/hl2dm/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/insurgency/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libinsurgency.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libinsurgency.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libinsurgency.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libinsurgency.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libinsurgency.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libinsurgency.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libinsurgency.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libinsurgency.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/jc2/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libjc2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libjc2.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libjc2.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libjc2.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libjc2.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libjc2.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libjc2.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libjc2.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/l4d/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/l4d2/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/lol/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblol.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblol.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblol.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/liblol.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/liblol.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblol.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblol.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblol.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/lotro/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblotro.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblotro.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblotro.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/liblotro.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/liblotro.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblotro.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblotro.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/liblotro.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/ql/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libql.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libql.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libql.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libql.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libql.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libql.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libql.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libql.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/rl/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/librl.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/librl.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/librl.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/librl.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/librl.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/librl.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/librl.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/librl.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/se/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libse.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libse.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libse.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libse.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libse.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libse.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libse.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libse.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/sr/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libsr.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libsr.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libsr.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libsr.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libsr.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libsr.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libsr.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libsr.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/sto/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/tf2/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/ut2004/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut2004.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut2004.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut2004.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libut2004.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libut2004.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut2004.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut2004.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut2004.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/ut3/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut3.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut3.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut3.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libut3.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libut3.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut3.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut3.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut3.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/ut99/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut99.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut99.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut99.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libut99.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libut99.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut99.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut99.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libut99.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/wolfet/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwolfet.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwolfet.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwolfet.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libwolfet.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libwolfet.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwolfet.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwolfet.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwolfet.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/wow/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwow.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwow.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwow.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libwow.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libwow.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwow.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwow.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwow.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/wow_x64/cmake_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwow_x64.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwow_x64.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwow_x64.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/lib/mumble/plugins/libwow_x64.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/lib/mumble/plugins" TYPE SHARED_LIBRARY FILES "/home/sgx/graphene/Tools/gsc/test/mumble/build/plugins/libwow_x64.so")
  if(EXISTS "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwow_x64.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwow_x64.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/usr/local/lib/mumble/plugins/libwow_x64.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xmumble_clientx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

