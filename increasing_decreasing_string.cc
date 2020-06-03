#include "gtest/gtest.h"
#include <bits/stdc++.h>
using namespace std;

string sortString(string s) {
    string result = "";
    set<char> a_set;
    for (char c : s) {
        a_set.insert(c);
    }
    while (true) {
        for (auto it = a_set.begin(); it != a_set.end(); it++) {
            size_t found = s.find(*it);
            if (found == string::npos)
                continue;
            result += *it;
            s.erase(found, 1);
            if (s.empty()) {
                break;
            }
        }
        if (s.empty()) {
            break;
        }
        for (auto it = a_set.rbegin(); it != a_set.rend(); it++) {
            size_t found = s.rfind(*it);
            if (found == string::npos)
                continue;
            result += *it;
            s.erase(found, 1);
            if (s.empty()) {
                break;
            }
        }
        if (s.empty()) {
            break;
        }
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
