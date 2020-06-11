#include <bits/stdc++.h>
#include "gtest/gtest.h"
using namespace std;

bool validPalindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    if (s == t) {
        return true;
    }
    for (int i = 0; i < s.length(); i++) {
        string a = s;
        a.erase(i, 1);
        string b = a;
        reverse(b.begin(), b.end());
        if (b == a) {
            return true;
        }
    }
    return false;
}

struct Test1 : ::testing::Test {
};

TEST_F(Test1, UnitTest1) {
    ASSERT_EQ(validPalindrome("aba"), true);
    ASSERT_EQ(validPalindrome("abca"), true);
    
}