# --------------------- #
# (C) 2020 madoodia.com #
# --------------------- #

# FOR BUILDING THE WHOLE PROJECT
# HERE AS THE API

cmake_minimum_required(VERSION 3.3)
project($ENV{TARGET_NAME} CXX)

SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)