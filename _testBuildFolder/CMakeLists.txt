# --------------------- #
# (C) 2020 madoodia.com #
# --------------------- #

cmake_minimum_required(VERSION 3.3)
project($ENV{TARGET_NAME} CXX)

SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)


set(SOURCES
    main.cpp
)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable($ENV{TARGET_NAME} ${SOURCES})
target_link_libraries($ENV{TARGET_NAME} ${GTEST_LIBRARIES} pthread)

# Running
# cmake -G "Unix Makefiles" -DCMAKE_PREFIX_PATH="/mnt/hdd/madoodia/sdks/googletest" .