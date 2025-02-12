cmake_minimum_required(VERSION 3.10)
project(FibonacciSequence)

add_subdirectory(googletest)

add_executable(FibonacciSequence src/main.cpp)

add_executable(FibonacciTests test/test.cpp)
target_link_libraries(FibonacciTests 
    GTest::gtest_main 
    GTest::gtest 
    GTest::gmock)