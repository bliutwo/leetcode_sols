#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> s1(nums1.begin(), nums1.end());
    set<int> s2(nums2.begin(), nums2.end());
    set<int> s3;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()));
    vector<int> v(s3.begin(), s3.end());
    return v;
}

void output(vector<int> v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v1 = {4,9,5};
    vector<int> v2 = {9,4,9,8,4};
    output(intersection(v1, v2));
    return 0;
}