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
add_executable(main_test main_test.cpp)
target_link_libraries(main_test gtest_main)
gtest_discover_tests(main_test)

# Adding the test subdirectories
add_subdirectory(value)
add_subdirectory(risk)