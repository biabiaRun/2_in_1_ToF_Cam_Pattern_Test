#****************************************************************************
# Copyright (C) 2018 pmdtechnologies ag & Infineon Technologies
#
# THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
# KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
# PARTICULAR PURPOSE.
#
#****************************************************************************

if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/install" CACHE PATH "The install path prefix" FORCE)
endif()

if((NOT DEFINED CMAKE_SYSTEM_PROCESSOR) OR CMAKE_SYSTEM_PROCESSOR STREQUAL "")
  message (FATAL_ERROR "Could not detect system processor architecture! Please define CMAKE_SYSTEM_PROCESSOR to a meaningful value.")
endif()
string(TOLOWER ${CMAKE_SYSTEM_PROCESSOR} SARCH)
if(SARCH MATCHES "arm.*" OR SARCH MATCHES "aarch.*")
  SET(ARCHITECTURE "arm" CACHE INTERNAL "")
else()
  SET(ARCHITECTURE "x86" CACHE INTERNAL "")
endif()
message(STATUS "Detected architecture is ${ARCHITECTURE}")

IF(CMAKE_SIZEOF_VOID_P EQUAL 4)
    MESSAGE(STATUS "Building for 32 Bit Platform")
    SET(ARCHITECTURE_BITNESS 32 CACHE INTERNAL "" FORCE)
ELSEIF(CMAKE_SIZEOF_VOID_P EQUAL 8)
    MESSAGE(STATUS "Building for 64 Bit Platform")
    SET(ARCHITECTURE_BITNESS 64 CACHE INTERNAL "" FORCE)
ELSE(CMAKE_SIZEOF_VOID_P EQUAL 4)
    MESSAGE(FATAL_ERROR "Could not detect bitness! ${CMAKE_SIZEOF_VOID_P}")
ENDIF(CMAKE_SIZEOF_VOID_P EQUAL 4)

IF(NOT ROYALE_TARGET_PLATFORM)
    IF(WIN32)
        SET(ROYALE_TARGET_PLATFORM WINDOWS CACHE STRING "")
    ELSEIF(APPLE)
        SET(ROYALE_TARGET_PLATFORM APPLE CACHE STRING "")
    ELSEIF(UNIX)
        SET(ROYALE_TARGET_PLATFORM LINUX CACHE STRING "")
    ENDIF(WIN32)
ENDIF(NOT ROYALE_TARGET_PLATFORM)
MESSAGE(STATUS "Target Platform:${ROYALE_TARGET_PLATFORM}")

IF (${ROYALE_TARGET_PLATFORM} STREQUAL ANDROID)
    ADD_DEFINITIONS(-DTARGET_PLATFORM_ANDROID)
    IF(NOT ROYALE_ANDROID_LOG_FILE)
        SET(ROYALE_ANDROID_LOG_FILE "/storage/sdcard0/royale/royale.log" CACHE STRING "")
    ENDIF(NOT ROYALE_ANDROID_LOG_FILE)
ENDIF()

ADD_DEFINITIONS(-DROYALE_TARGET_PLATFORM_${ROYALE_TARGET_PLATFORM})

# for cmake-gui
SET_PROPERTY(CACHE  ROYALE_TARGET_PLATFORM PROPERTY STRINGS "WINDOWS;APPLE;LINUX;ANDROID" )


SET(SPECTRE_TARGET_PLATFORM ${ROYALE_TARGET_PLATFORM} CACHE STRING "" FORCE)
