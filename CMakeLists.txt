# Initial set-up
cmake_minimum_required(VERSION 3.10.0)
project(main VERSION 0.1.0 LANGUAGES C CXX)

# Adding the src sub-directory
add_subdirectory(src)

# Enabling and adding tests
enable_testing()
add_subdirectory(tests)
