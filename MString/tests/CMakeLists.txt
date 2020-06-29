# --------------------- #
# (C) 2020 madoodia.com #
# --------------------- #

set(TEST_SOURCES
    main.cpp
)

include_directories(..)

add_executable(${CURRENT_FOLDER}_tst ${TEST_SOURCES})
target_link_libraries(${CURRENT_FOLDER}_tst PUBLIC ${CURRENT_FOLDER} gtest gmock)
