# Creating an executable of the capital-budgeting.cpp and linking it with gtest and the risk library in source
add_executable(capital-budgeting-test
    capital_budgeting_test.cpp
)
target_link_libraries(capital-budgeting-test gtest_main)
target_link_libraries(capital-budgeting-test capital-budgeting)
gtest_discover_tests(capital-budgeting-test)