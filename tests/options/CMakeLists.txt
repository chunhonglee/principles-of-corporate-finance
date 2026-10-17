# Creating an executable of the capital-budgeting.cpp and linking it with gtest and the risk library in source
add_executable(options_test
    options_test.cpp
)
target_link_libraries(options_test gtest_main)
target_link_libraries(options_test options)
gtest_discover_tests(options_test)