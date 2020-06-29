# --------------------- #
# (C) 2020 madoodia.com #
# --------------------- #

cmake_minimum_required(VERSION 3.6)
project($ENV{TARGET_NAME} CXX)

set(CMAKE_CXX_STANDARD 11)

get_filename_component(CURRENT_FOLDER ${CMAKE_CURRENT_SOURCE_DIR} NAME)

set(SOURCES
    mString.cpp
)

include_directories(../Core)
# add_executable($ENV{TARGET_NAME} ${SOURCES})
if(NOT DEFINED BUILD_ALL)
    include_directories($ENV{GTEST_BASE_LOCATION}/googletest/include)
    include_directories($ENV{GTEST_BASE_LOCATION}/googlemock/include)
    add_subdirectory($ENV{GTEST_BASE_LOCATION} ./build)    
endif()

add_library(${CURRENT_FOLDER} STATIC ${SOURCES})

add_subdirectory(tests)