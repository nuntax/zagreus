# AimGods_Server_Core/CMakeLists.txt

cmake_minimum_required(VERSION 3.16)
project(AimGods_Server_Core)

set(CMAKE_CXX_STANDARD 20)

# Vcpkg
if(DEFINED ENV{VCPKG_ROOT})
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake")
else()
    message(FATAL_ERROR "Please set VCPKG_ROOT environment variable to vcpkg root directory")
endif()



# Include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../AimGods_Common/include)

# Source files (all .cpp files from AimGods_Common/src)


# Source files specific to Server
file(GLOB SOURCES "src/*.cpp")

#packages
find_package(polyhook_2 CONFIG REQUIRED)

#link libraries
target_link_libraries(AimGods_Server_Core PRIVATE polyhook_2::polyhook_2)

# Create the DLL
add_library(AimGods_Server_Core SHARED ${SOURCES})

# Set output properties
set_target_properties(AimGods_Server_Core PROPERTIES 
    OUTPUT_NAME "AimGods_Server_Core"
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
