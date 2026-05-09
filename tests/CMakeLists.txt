# Adding GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Including GoogleTest for the "gtest_discover_tests" command
include(GoogleTest)

# Creating an executable of the main_test.cpp and linking it with gtest
add_executable(tests main_test.cpp)
target_link_libraries(tests gtest_main)
gtest_discover_tests(tests)

# Adding the test module
add_subdirectory(module)
