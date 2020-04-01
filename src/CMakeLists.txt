# --------------------- #
# (C) 2020 madoodia.com #
# --------------------- #

set(SOURCES
    "main.cpp"
    "mstrings.cpp"
)

add_executable($ENV{TARGET_NAME} ${SOURCES})


# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
target_link_libraries($ENV{TARGET_NAME} ${GTEST_LIBRARIES} pthread)

# Running
# cmake -G "Unix Makefiles" -DCMAKE_PREFIX_PATH="/mnt/hdd/madoodia/sdks/googletest" .