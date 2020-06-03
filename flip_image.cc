#include "gtest/gtest.h"
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
    for (size_t i = 0; i < A.size(); i++) {
        reverse(A[i].begin(), A[i].end());
    }
    for (size_t i = 0; i < A.size(); i++) {
        for (size_t j = 0; j < A[0].size(); j++) {
            if (A[i][j] == 0)
                A[i][j] = 1;
            else
                A[i][j] = 0;
        }
    }
    return A;
}

struct Test1 : ::testing::Test {
    vector<vector<int>> input = {{1,1,0},{1,0,1},{0,0,0}};
    vector<vector<int>> output = {{1,0,0},{0,1,0},{1,1,1}};
};

struct Test2 : ::testing::Test {
    vector<vector<int>> input = {{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};
    vector<vector<int>> output = {{1,1,0,0},{0,1,1,0},{0,0,0,1},{1,0,1,0}};
};

TEST_F(Test1, UnitTest1) {
    ASSERT_EQ(flipAndInvertImage(input), output);
}

TEST_F(Test2, UnitTest2) {
    ASSERT_EQ(flipAndInvertImage(input), output);
}