# AimGods_Client_Core/CMakeLists.txt

cmake_minimum_required(VERSION 3.16)
project(AimGods_Client_Core)

set(CMAKE_CXX_STANDARD 20)
set(SDKDIR ${CMAKE_CURRENT_SOURCE_DIR}/../AimGods_Common/include/SDK)

include(${CMAKE_CURRENT_SOURCE_DIR}/varbuilder.cmake)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../AimGods_Common/include)

# Common headers
file(GLOB COMMON_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/../AimGods_Common/include/*.hpp")

# Common sources (implementation files)
file(GLOB COMMON_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/../AimGods_Common/src/*.cpp")

#include sdk header
set(SDK_SOURCES ${SDKDIR}/Basic.cpp)
set(SDK_HEADERS ${SDKDIR}/Basic.hpp)

varbuilder(CoreUObject SDK_SOURCES)
varbuilder(AimGods SDK_SOURCES)
varbuilder(Engine SDK_SOURCES)
message(STATUS "SDK Sources: ${SDK_SOURCES}")
# Client sources
file(GLOB CLIENT_SOURCES "src/*.cpp")

# Combine all sources
set(SOURCES ${COMMON_HEADERS} ${COMMON_SOURCES} ${CLIENT_SOURCES} ${SDK_HEADERS} ${SDK_SOURCES})


#target creation
add_library(${PROJECT_NAME} SHARED ${SOURCES})


#setup filters
source_group("Common" FILES ${COMMON_HEADERS} ${COMMON_SOURCES})
source_group("Client" FILES ${CLIENT_SOURCES})
source_group("SDK" FILES ${SDK_HEADERS} ${SDK_SOURCES})

#packages
find_path(DETOURS_INCLUDE_DIRS "detours/detours.h")
find_library(DETOURS_LIBRARY detours REQUIRED)

target_include_directories(${PROJECT_NAME} PRIVATE ${DETOURS_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PRIVATE ${DETOURS_LIBRARY})



#static link msvc runtime
set_property(TARGET ${PROJECT_NAME} PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

set_target_properties(${PROJECT_NAME} PROPERTIES 
    OUTPUT_NAME "AimGods_Client_Core"
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
