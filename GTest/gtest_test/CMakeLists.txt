# ----------------------------------- #
# =================================== #
#      (C) 2019 madoodia.com          #
#      All rights reserved.           #
# =================================== #
# ----------------------------------- #

cmake_minimum_required(VERSION 3.2)
project($ENV{TARGET_NAME} CXX)

set(BINARY ${CMAKE_PROJECT_NAME})

set(SOURCES
    test_with_gtest.cpp
)

add_executable($ENV{TARGET_NAME} ${SOURCES})

add_subdirectory($ENV{GTEST_BASE_LOCATION} ./build)

target_link_libraries($ENV{TARGET_NAME} PUBLIC gtest)
