#include "gtest/gtest.h"
#include <bits/stdc++.h>
using namespace std;

string example_function(string s) {
    string result = "";
    return result;
}

struct Test1 : ::testing::Test {
    string input = "";
    string output = "";
};

TEST_F(Test1, UnitTest1) {
    ASSERT_EQ(example_function(input), output);
}