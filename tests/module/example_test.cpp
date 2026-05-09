#include <iostream>

#include "gtest/gtest.h"
#include "../../src/module/example.h"

TEST(example_test_case, example_test)
{
    EXPECT_EQ(1, 1);
}

TEST(example_test_case, example_test2)
{
    int num = Example::numExample();
    EXPECT_EQ(num, 0);
}
