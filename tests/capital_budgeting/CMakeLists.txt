# Creating an executable of the capital-budgeting.cpp and linking it with gtest and the risk library in source
add_executable(capital_budgeting_test
    capital_budgeting_test.cpp
)
target_link_libraries(capital_budgeting_test gtest_main)
target_link_libraries(capital_budgeting_test capital_budgeting)
gtest_discover_tests(capital_budgeting_test)