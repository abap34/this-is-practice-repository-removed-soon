cmake_minimum_required(VERSION 3.20)
project(CI_Test)

include_directories(${PROJECT_SOURCE_DIR}/src)

add_library(mylib src/mylib.cpp)
add_executable(main src/main.cpp)

target_link_libraries(main mylib)

enable_testing()

add_subdirectory(tests/ext/googletest)

add_executable(test_mylib tests/test_mylib.cpp)
target_link_libraries(test_mylib mylib gtest_main)
add_test(NAME test_mylib COMMAND test_mylib)

add_subdirectory(tests/ext/benchmark)
add_executable(benchmark_mylib src/mylib.cpp tests/benchmark_mylib.cpp)
target_link_libraries(benchmark_mylib benchmark::benchmark)