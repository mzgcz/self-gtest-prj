cmake_minimum_required(VERSION 2.6)

project(self_test)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

aux_source_directory(.. CODE_SRC)
aux_source_directory(. TEST_SRC)

add_executable(self_test ${CODE_SRC} ${TEST_SRC})

target_link_libraries(self_test ${GTEST_MAIN_LIBRARIES} ${GTEST_LIBRARIES} pthread)