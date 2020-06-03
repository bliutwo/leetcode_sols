#include "gtest/gtest.h"
#include <bits/stdc++.h>
using namespace std;

string sortString(string s) {
    set<char> a_set;
    for (char c : s) {
        a_set.insert(c);
    }
    string result = "";
    while (true) {
        bool broken = false;
        for (auto it = a_set.begin(); it != a_set.end(); it++) {
            result += *it;
            if (s.length() == result.length()) {
                broken = true;
                break;
            }
        }
        if (broken)
            break;
        for (auto it = a_set.rbegin(); it != a_set.rend(); it++) {
            result += *it;
            if (s.length() == result.length()) {
                broken = true;
                break;
            }
        }
        if (broken)
            break;
    }
    return result;
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
