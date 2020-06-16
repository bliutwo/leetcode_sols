#include <bits/stdc++.h>
using namespace std;

void output(vector<int> v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

void output(set<int> s) {
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v1 = {0, 1, 2, 3, 4, 4};
    vector<int> v2 = {2, 3, 4, 4, 5};
    vector<int> v3;
    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v3)); // v3 contains duplicates
    output(v3);
    set<int> s1(v1.begin(), v1.end());
    set<int> s2(v2.begin(), v2.end());
    set<int> s3;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()));
    output(s3);
}
