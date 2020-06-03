#include "gtest/gtest.h"
#include <bits/stdc++.h>
using namespace std;

// DOESN'T WORK
string sortString(string s) {
    string result = "";
    map<char, int> m;
    for (char c : s) {
        if (m.find(c) == m.end()) {
            m[c] = 0;
        } else {
            m[c] += 1;
        }
    }
    bool forward = true;
    while (!m.empty()) {
        if (forward) {
            for (auto it = m.begin(); it != m.end(); it++) {
                char key = it->first;
                int val = it->second;
                result += key;
                m[key] -= 1;
                if(m[key] == 0)
                    m.erase(key);
            }
            forward ^= 1;
        } else {
            for (auto it = m.rbegin(); it != m.rend(); it++) {
                char key = it->first;
                int val = it->second;
                result += key;
                m[key] -= 1;
                if(m[key] == 0)
                    m.erase(key);
            }
            forward ^= 1;
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
