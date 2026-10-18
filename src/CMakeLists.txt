# Adding the sub-directory module
add_subdirectory(value)
add_subdirectory(risk)
add_subdirectory(capital_budgeting)
add_subdirectory(financing_decisions_and_market_efficiency)
add_subdirectory(payout_policy_and_capital_structure)
add_subdirectory(corporate_objectives_and_governance)
add_subdirectory(options)
add_subdirectory(debt_financing)
add_subdirectory(risk_management)

# Creating an executable of the main.cpp
add_executable(main main.cpp)

# Linking libraries to the main executable
target_link_libraries(main value)
target_link_libraries(main risk)
target_link_libraries(main capital_budgeting)
target_link_libraries(main financing_decisions_and_market_efficiency)
target_link_libraries(main payout_policy_and_capital_structure)
target_link_libraries(main corporate_objectives_and_governance)
target_link_libraries(main options)
target_link_libraries(main debt_financing)
target_link_libraries(main risk_management)