#include <bits/stdc++.h>
using namespace std;

void output(vector<int> v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {0, 1, 2, 3, 4};
    output(v);
    // int i = 1;
    // v.erase(v.begin() + i);
    v.erase(v.begin() + 1, v.begin() + 4);
    output(v);
}
