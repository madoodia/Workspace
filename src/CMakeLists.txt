# --------------------- #
# (C) 2020 madoodia.com #
# --------------------- #

set(SOURCES
    main.cpp
)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
add_executable($ENV{TARGET_NAME} ${SOURCES})
target_link_libraries($ENV{TARGET_NAME} ${GTEST_LIBRARIES} pthread)