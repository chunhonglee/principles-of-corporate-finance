# Adding Boost library
find_package(Boost REQUIRED)

# Adding raylib library
find_package(raylib REQUIRED)

# Adding the sub-directory module
add_subdirectory(module)

# Creating an executable of the main.cpp
add_executable(main main.cpp)

# Linking libraries to the main executable
target_link_libraries(main example)
target_link_libraries(main Boost::headers)
target_link_libraries(main raylib)
