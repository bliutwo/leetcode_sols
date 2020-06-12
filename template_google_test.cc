#include "gtest/gtest.h"
#include <bits/stdc++.h>
using namespace std;

int example_function(int input) {
    return input;
}

struct Test1 : ::testing::Test {
    input = 1;
    output = 1;
};

struct Test2 : ::testing::Test {
    input = 0;
    output = 1;
};

TEST_F(Test1, UnitTest1) {
    ASSERT_EQ(example_function(input), output);
}

TEST_F(Test2, UnitTest2) {
    ASSERT_EQ(example_function(input), output);
}