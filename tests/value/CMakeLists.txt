# Creating an executable of the value_test.cpp and linking it with gtest and the value library in source
add_executable(value_test 
    value_test.cpp
    bond_test.cpp
    stock_test.cpp
)
target_link_libraries(value_test gtest_main)
target_link_libraries(value_test value)
gtest_discover_tests(value_test)