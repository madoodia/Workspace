# --------------------- #
# (C) 2020 madoodia.com #
# --------------------- #

set(SOURCES
    main.cpp
)

include_directories(../Core)
add_executable($ENV{TARGET_NAME} ${SOURCES})

add_subdirectory($ENV{GTEST_BASE_LOCATION} ./build)
target_link_libraries($ENV{TARGET_NAME} PUBLIC gtest)