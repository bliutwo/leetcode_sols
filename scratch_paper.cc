#include <bits/stdc++.h>
using namespace std;

void output(map<char, int> m) {
    for (auto const& x : m) {
        cout << x.first << ":" << x.second << " ";
    }
    cout << endl;
}

int main() {
    map<char, int> m = {{1, 2}, {3, 4}};
    output(m);
    return 0;
}
