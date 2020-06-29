# --------------------- #
# (C) 2020 madoodia.com #
# --------------------- #

# FOR BUILDING THE WHOLE PROJECT
# HERE AS THE API

cmake_minimum_required(VERSION 3.6)
project($ENV{TARGET_NAME} CXX)

SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

set(BUILD_ALL ON)

include_directories($ENV{GTEST_BASE_LOCATION}/googletest/include)
include_directories($ENV{GTEST_BASE_LOCATION}/googlemock/include)
add_subdirectory($ENV{GTEST_BASE_LOCATION} ./build)

add_subdirectory(MString)
add_subdirectory(MArray)
# add_subdirectory(...)
