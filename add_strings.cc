#include <bits/stdc++.h>
#include "gtest/gtest.h"
using namespace std;

string addStrings(string num1, string num2) {
    int i = num1.size() - 1;
    int j = num2.size() - 1;
    int carry = 0;
    string ans = "";
    while (i >= 0 || j >= 0 || carry) {
        long sum = 0;
        if (i >= 0) {
            sum += (num1[i] - '0');
            i--;
        }
        if (j >= 0) {
            sum += (num2[j] - '0');
            j--;
        }
        sum += carry;
        carry = sum / 10;
        sum = sum % 10;
        char add = '0' + sum;
        ans = ans + add;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

struct Test1 : ::testing::Test {
    string input1 = "3457";
    string input2 = "4987";
    string output = "8444";
};

struct Test2 : ::testing::Test {
    string input1 = "1";
    string input2 = "9";
    string output = "10";
};

struct Test3 : ::testing::Test {
    string input1 = "45";
    string input2 = "4987";
    string output = "5032";
};

TEST_F(Test1, UnitTest1) {
    ASSERT_EQ(addStrings(input1, input2), output);
    ASSERT_EQ(addStrings(input1, input2), output);
}

TEST_F(Test2, UnitTest2) {
    ASSERT_EQ(addStrings(input1, input2), output);
    ASSERT_EQ(addStrings(input2, input1), output);
}

TEST_F(Test3, UnitTest3) {
    ASSERT_EQ(addStrings(input1, input2), output);ASSERT_EQ(addStrings(input2, input1), output);
}