# --------------------- #
# (C) 2020 madoodia.com #
# --------------------- #

cmake_minimum_required(VERSION 3.3)
project($ENV{TARGET_NAME} CXX)

set(SOURCES
    main.cpp
    mQueue.cpp
)

include_directories(../Core)
add_executable($ENV{TARGET_NAME} ${SOURCES})

add_subdirectory($ENV{GTEST_BASE_LOCATION} ./build)
target_link_libraries($ENV{TARGET_NAME} PUBLIC gtest)