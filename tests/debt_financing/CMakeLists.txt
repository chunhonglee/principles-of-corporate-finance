# Creating an executable of the capital-budgeting.cpp and linking it with gtest and the risk library in source
add_executable(debt_financing_test
    debt_financing_test.cpp
)
target_link_libraries(debt_financing_test gtest_main)
target_link_libraries(debt_financing_test debt_financing)
gtest_discover_tests(debt_financing_test)