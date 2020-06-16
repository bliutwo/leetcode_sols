#include "gtest/gtest.h"
#include <bits/stdc++.h>
using namespace std;

string remove_duplicates(string& s) {
    if (s.empty() || s.length() == 1) return s;
    string new_string{};
    new_string += s[0];
    for (size_t i = 1; i < s.length(); i++) {
        char curr = s[i];
        char last = new_string[new_string.length() - 1];
        if (curr == last) {
            int erase_index = new_string.length() - 1;
            new_string.erase(erase_index, 1);
        } else {
            new_string += curr;
        }
    }
    return new_string;
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