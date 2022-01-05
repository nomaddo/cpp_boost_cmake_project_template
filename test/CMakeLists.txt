# Unit tests
add_executable(unittest "lib_unittest.cpp" "../src/lib.cpp")
target_link_libraries(unittest gtest_main)

include(GoogleTest)

# https://cmake.org/cmake/help/latest/module/GoogleTest.html#module:GoogleTest
gtest_discover_tests(unittest)
