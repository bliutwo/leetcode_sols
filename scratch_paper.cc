#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Brian";
    cout << s << endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
}
