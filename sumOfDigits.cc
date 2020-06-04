#include "gtest/gtest.h"
#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(vector<int>& A) {
    int result{};
    int min_elem = *min_element(A.begin(), A.end());
    string s = to_string(min_elem);
    int total{};
    for (size_t i = 0; i < s.length(); i++) {
        int digit = s[i] - '0';
        total += digit;
    }
    if (total % 2 == 0) {
        result++;
    }
    return result;
}

struct Test1 : ::testing::Test {
    vector<int> input = {34,23,1,24,75,33,54,8};
    int output = 0;
};

struct Test2 : ::testing::Test {
    vector<int> input = {99,77,33,66,55};
    int output = 1;
};

TEST_F(Test1, UnitTest1) {
    ASSERT_EQ(sumOfDigits(input), output);
}

TEST_F(Test2, UnitTest2) {
    ASSERT_EQ(sumOfDigits(input), output);
}