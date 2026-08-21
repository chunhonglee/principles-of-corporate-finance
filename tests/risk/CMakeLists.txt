# Creating an executable of the risk_test.cpp and linking it with gtest and the risk library in source
add_executable(risk_test
    risk_test.cpp
)
target_link_libraries(risk_test gtest_main)
target_link_libraries(risk_test risk)
gtest_discover_tests(risk_test)