#include <bits/stdc++.h>
using namespace std;

int binarySearch(int t, const vector<int>& A) {
    int L = 0;
    int U = A.size() - 1;
    while (L <= U) {
        int M = (U - L) / 2 + L;
        if (A[M] < t) {
            L = M + 1;
        } else if (A[M] == t) {
            return M;
        } else {
            U = M - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> v;
    for (int i = 0; i < 100; i++) {
        v.push_back(i);
    }
    int a = binarySearch(5, v);
    int b = binarySearch(101, v);
    int c = binarySearch(99, v);
    int d = binarySearch(0, v);
    int e = binarySearch(57, v);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
}