# AimGods_Server_Core/CMakeLists.txt

cmake_minimum_required(VERSION 3.16)
project(AimGods_Server_Core)

set(CMAKE_CXX_STANDARD 20)

# Include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../AimGods_Common/include)

# Source files (all .cpp files from AimGods_Common/src)


# Source files specific to server
file(GLOB SOURCES "src/*.cpp")

# Create the DLL
add_library(AimGods_Server_Core SHARED ${SOURCES})

# Set output properties
set_target_properties(AimGods_Server_Core PROPERTIES 
    OUTPUT_NAME "AimGods_Server_Core"
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
