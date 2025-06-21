cmake_minimum_required(VERSION 3.31)
project(PokePlusEngine VERSION 1.0 LANGUAGES C CXX)
include(GNUInstallDirs)

option(BUILD_SHARED_LIBS "Build shared libraries" ON)
message(STATUS "Building shared libs: ${BUILD_SHARED_LIBS}")

add_subdirectory(vendored/SDL EXCLUDE_FROM_ALL)

add_subdirectory(test_project)
add_subdirectory(pokeplusenginelib)
