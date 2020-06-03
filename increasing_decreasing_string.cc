#include "gtest/gtest.h"
#include <bits/stdc++.h>
using namespace std;

string sortString(string s) {
    string increasing = s;
    string decreasing = s;
    sort(increasing.begin(), increasing.end());
}

struct Test1 : ::testing::Test {
    string input = "aaaabbbbcccc";
    string output = "abccbaabccba";
};

struct Test2 : ::testing::Test {
    string input = "rat";
    string output = "art";
};

struct Test3 : ::testing::Test {
    string input = "leetcode";
    string output = "cdelotee";
};

struct Test4 : ::testing::Test {
    string input = "ggggggg";
    string output = "ggggggg";
};

struct Test5 : ::testing::Test {
    string input = "spo";
    string output = "ops";
};

TEST_F(Test1, UnitTest1) {
    ASSERT_EQ(sortString(input), output);
}

TEST_F(Test2, UnitTest2) {
    ASSERT_EQ(sortString(input), output);
}

TEST_F(Test3, UnitTest3) {
    ASSERT_EQ(sortString(input), output);
}

TEST_F(Test4, UnitTest4) {
    ASSERT_EQ(sortString(input), output);
}

TEST_F(Test5, UnitTest5) {
    ASSERT_EQ(sortString(input), output);
}
