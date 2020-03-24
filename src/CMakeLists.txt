# ----------------------------------- #
# =================================== #
#      (C) 2019 madoodia.com          #
#      All rights reserved.           #
# =================================== #
# ----------------------------------- #

cmake_minimum_required(VERSION 3.2)
project($ENV{BASENAME} CXX)


file(GLOB SOURCES
    string.h
    string.cpp
)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable($ENV{FILE_NAME} $ENV{FILE_NAME}.cpp ${SOURCES})
target_link_libraries($ENV{FILE_NAME} ${GTEST_LIBRARIES} pthread)


# Running
# cmake -G "Unix Makefiles" -DCMAKE_PREFIX_PATH="/mnt/hdd/madoodia/sdks/googletest" .