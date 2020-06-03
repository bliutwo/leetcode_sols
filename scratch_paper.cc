#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "abcdefghijklmnop";
    cout << s << endl;
    sort(s.begin(), s.end(), greater<char>());
    cout << s << endl;
    return 0;
}
