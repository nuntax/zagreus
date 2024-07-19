# AimGods_Client_Core/CMakeLists.txt

cmake_minimum_required(VERSION 3.16)
project(AimGods_Client_Core)

set(CMAKE_CXX_STANDARD 20)

# Include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../AimGods_Common/include)

# Source files specific to Client
file(GLOB SOURCES "src/*.cpp")

# Create the DLL
add_library(${PROJECT_NAME} SHARED ${SOURCES})

#link libraries
find_package(minhook CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE minhook::minhook)

# Set output properties
set_target_properties(${PROJECT_NAME} PROPERTIES 
    OUTPUT_NAME "AimGods_Client_Core"
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
