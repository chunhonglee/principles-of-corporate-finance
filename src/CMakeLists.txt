# Adding the sub-directory module
add_subdirectory(value)
add_subdirectory(risk)

# Creating an executable of the main.cpp
add_executable(main main.cpp)

# Linking libraries to the main executable
target_link_libraries(main value)
target_link_libraries(main risk)
