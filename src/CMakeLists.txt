# Adding the sub-directory module
add_subdirectory(value)
add_subdirectory(risk)
add_subdirectory(capital-budgeting)
add_subdirectory(financing-decisions-and-market-efficiency)

# Creating an executable of the main.cpp
add_executable(main main.cpp)

# Linking libraries to the main executable
target_link_libraries(main value)
target_link_libraries(main risk)
target_link_libraries(main capital-budgeting)
target_link_libraries(main financing_decisions_and_market_efficiency_test)
