#include <bits/stdc++.h>
#include "gtest/gtest.h"
using namespace std;

bool is_palindrome (string s, int i, int j) {
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool validPalindrome(string s) {
    int i = 0;
    int j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return is_palindrome(s, i+1, j) or is_palindrome(s, i, j-1);
        }
        i++;
        j--;
    }
    return true;
}

struct Test1 : ::testing::Test {
};

TEST_F(Test1, UnitTest1) {
    ASSERT_EQ(validPalindrome("aba"), true);
    ASSERT_EQ(validPalindrome("abca"), true);
    
}