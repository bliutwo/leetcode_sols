#include <bits/stdc++.h>
#include "gtest/gtest.h"
using namespace std;

string addStrings(string num1, string num2) {
    string total{};
    int i = num1.length() - 1;
    int j = num2.length() - 1;
    int carry = 0;
    while (i >= 0 and j >= 0) {
        char a = num1[i];
        char b = num2[j];
        int first = a - '0';
        int second = b - '0';
        int third = first + second;
        bool increment_carry = false;
        if (third > 9) {
            increment_carry = true;
            third = third % 10;
        }
        char add;
        if (carry > 0) {
            add = '0' + third + 1;
            carry--;
        } else {
            add = '0' + third;
        }
        if (increment_carry)
            carry++;
        total.insert(total.begin(), add);
        i--;
        j--;
    }
    cout << i << endl;
    cout << j << endl << endl;
    while (i >= 0) {
        char a = num1[i];
        int first = a - '0';
        char add;
        if (carry > 0) {
            add = '0' + first + 1;
            carry--;
        } else {
            add = '0' + first;
        }
        total.insert(total.begin(), add);
        i--;
    }
    while (j >= 0) {
        char b = num2[j];
        int second = b - '0';
        char add;
        if (carry > 0) {
            add = '0' + second + 1;
            carry--;
        } else {
            add = '0' + second;
        }
        total.insert(total.begin(), add);
        j--;
    }
    if (carry > 0) {
        total.insert(total.begin(), '1');
    }
    return total;
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