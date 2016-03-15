cmake_minimum_required(VERSION 2.6)

project(self_test)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(self_test self_test.cc)

target_link_libraries(self_test ${GTEST_MAIN_LIBRARIES} ${GTEST_LIBRARIES} pthread)