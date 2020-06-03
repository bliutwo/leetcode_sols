#include "gtest/gtest.h"
#include <bits/stdc++.h>
using namespace std;

void output(vector<int> v) {
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
}

vector<int> replaceElements(vector<int>& arr) {
    if (arr.size() == 1) {
        arr[0] = -1;
        return arr;
    }
    vector<int> sorted = arr;
    sort(sorted.begin(), sorted.end(), greater<int>());
    output(sorted);
    output(arr);
    vector<int> v(arr.size(), 0);
    int curr_max_index = 0;
    for (size_t i = 0; i < arr.size()-1; i++) {
        if (arr[i] < sorted[curr_max_index]) {
            v[i] = sorted[curr_max_index];
            curr_max_index += 2;
        } else if (arr[i] == sorted[curr_max_index]) {
            curr_max_index++;
            v[i] = sorted[curr_max_index];
        } else {
            v[i] = sorted[curr_max_index];
        }
        output(v);
    }
    v[v.size() - 1] = -1;
    return v;
}

struct Test1 : ::testing::Test {
    vector<int> v = {17,18,5,4,6,1};
    vector<int> v1 = {18,6,6,6,1,-1};
};

TEST_F(Test1, UnitTest1) {
    ASSERT_EQ(replaceElements(v), v1);
}