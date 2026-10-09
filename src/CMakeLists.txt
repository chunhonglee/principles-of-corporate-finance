# Adding the sub-directory module
add_subdirectory(value)
add_subdirectory(risk)
add_subdirectory(capital_budgeting)
add_subdirectory(financing_decisions_and_market_efficiency)

# Creating an executable of the main.cpp
add_executable(main main.cpp)

# Linking libraries to the main executable
target_link_libraries(main value)
target_link_libraries(main risk)
target_link_libraries(main capital_budgeting)
target_link_libraries(main financing_decisions_and_market_efficiency)
