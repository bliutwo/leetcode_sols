#include <bits/stdc++.h>
#include "gtest/gtest.h"
using namespace std;

int remove_duplicates(string& s) {
    if (s.empty()) return s;
    for (int i = 0; i < s.length() - 1; i++) {
        char a = s[i];
        char b = s[i+1];
        if (a == b) {
            s.erase(i, 2);
            i = -1;
        }
    }
    return s;
}

struct Test1 : ::testing::Test {
    string input = "aaab";
    string output = "ab";
};

struct Test2 : ::testing::Test {
    string input = "aa";
    string output = "";
};

TEST_F(Test1, UnitTest1) {
    ASSERT_EQ(remove_duplicates(input), output);
}

TEST_F(Test2, UnitTest2) {
    ASSERT_EQ(remove_duplicates(input), output);
}