#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {0, 1, 2, 3, 4, 5};
    int total = 0;
    cout << total << endl;
    total = accumulate(v.begin(), v.end(), total);
    cout << total << endl;
}
