cmake_minimum_required(VERSION 3.21)

set(PLATFORM "pc" CACHE STRING "Platform to build for")
set_property(CACHE PLATFORM PROPERTY STRINGS pc vita)

IF(PLATFORM STREQUAL "pc")
ELSEIF(PLATFORM STREQUAL "vita")
    IF(DEFINED ENV{VITASDK})
        include("$ENV{VITASDK}/share/vita.toolchain.cmake" REQUIRED)
        include("$ENV{VITASDK}/share/vita.cmake" REQUIRED)
        set(VITA_APP_NAME "gl4es4vita SDL2 Gear")
        set(VITA_TITLEID  "GL4ESGEAR")
        set(VITA_VERSION  "01.00")
        set(VITA_MKSFOEX_FLAGS "${VITA_MKSFOEX_FLAGS} -d PARENTAL_LEVEL=1")
    ELSE()
        message(FATAL_ERROR "Please define VITASDK to point to your SDK path!")
    ENDIF()
endif()

project(gl4es4vita-sdl2-gear)

set(CMAKE_CXX_STANDARD 14)

if(PLATFORM STREQUAL "vita")
    find_package(SDL2 CONFIG REQUIRED PATHS $ENV{VITASDK}/arm-vita-eabi NO_DEFAULT_PATH)
else()
    find_package(SDL2)
    find_package(OpenGL)
endif()

if(PLATFORM STREQUAL "pc")
    add_executable(${PROJECT_NAME} main.cpp)
    target_link_libraries(${PROJECT_NAME} SDL2::SDL2)
endif()

if(PLATFORM STREQUAL "vita")
    add_executable(${PROJECT_NAME} main.cpp)

    add_definitions("-march=armv7-a+simd")
    add_definitions("-D__VITA__")
    target_link_libraries(${PROJECT_NAME}
            SDL2::SDL2
            SceIme_stub
    )

    vita_create_self(${PROJECT_NAME}.self ${PROJECT_NAME} UNSAFE)
    vita_create_vpk(${PROJECT_NAME}.vpk ${VITA_TITLEID} ${PROJECT_NAME}.self
        VERSION ${VITA_VERSION}
        NAME ${VITA_APP_NAME}
        FILE vita/sce_sys sce_sys
        FILE vita/module module
    )
endif()