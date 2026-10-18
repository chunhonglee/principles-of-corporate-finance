# Creating an executable of the capital-budgeting.cpp and linking it with gtest and the risk library in source
add_executable(risk_management_test
    risk_management_test.cpp
)
target_link_libraries(risk_management_test gtest_main)
target_link_libraries(risk_management_test risk_management)
gtest_discover_tests(risk_management_test)