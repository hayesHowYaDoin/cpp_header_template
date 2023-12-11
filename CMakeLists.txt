cmake_minimum_required(VERSION 3.28 FATAL_ERROR)
project(physics_engine)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(physics_engine INTERFACE)
add_library(physics::engine ALIAS physics_engine)

target_include_directories(physics_engine INTERFACE include)

option(BUILD_TESTING "Build tests" ON)

if(BUILD_TESTING AND EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/test/CMakeLists.txt")

  add_subdirectory(test)

endif()
