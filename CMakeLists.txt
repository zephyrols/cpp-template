cmake_minimum_required(VERSION 3.21)

# Configure vcpkg integration if available
if(DEFINED ENV{VCPKG_ROOT})
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" 
        CACHE STRING "Vcpkg toolchain file")
    message(STATUS "Using vcpkg from ${CMAKE_TOOLCHAIN_FILE}")
else()
    message(WARNING "VCPKG_ROOT not defined - using system libraries")
endif()

project(ExampleProject VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_MODULE_PATH "cmake" ${CMAKE_MODULE_PATH})


find_package(GTest CONFIG REQUIRED)
find_package(fmt   CONFIG REQUIRED)

add_subdirectory(src)

enable_testing()
add_subdirectory(test)
