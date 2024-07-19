cmake_minimum_required(VERSION 3.16)
project(AimGods_Common)

# Include directories for SDK headers
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Collect all SDK header files
file(GLOB_RECURSE SDK_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/SDK/*.hpp")

# Create a static library with no sources (header-only library)
add_library(aimgods_sdk INTERFACE)

# Set include directories for the SDK interface library
target_include_directories(aimgods_sdk INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Optionally, set properties for the SDK library (if necessary)
set_target_properties(aimgods_sdk PROPERTIES
    OUTPUT_NAME "aimgods_sdk"
)
