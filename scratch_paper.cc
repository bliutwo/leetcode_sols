#include <bits/stdc++.h>
using namespace std;

int main() {
    string s{};
    int x = 143;
    for (int i = 31; i >= 0; i--) {
        if ((x & (1 << i)) != 0) {
            s += '1';
        } else {
            s += '0';
        }
    }
    cout << s << endl;
}
