#include <bits/stdc++.h>
using namespace std;

void output(vector<int> v) {
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {0, 1, 2, 3};
    auto d = distance(v.begin(), v.end());
    cout << d << endl;
    cout << typeid(d).name() << endl;
    return 0;
}
