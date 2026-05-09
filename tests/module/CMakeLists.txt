# Creating an executable of the example_test.cpp and linking it with gtest and the example library in source
add_executable(example_tests example_test.cpp)
target_link_libraries(example_tests gtest_main)
target_link_libraries(example_tests example)
gtest_discover_tests(example_tests)
