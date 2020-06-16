#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "412345";
    char c = '4';
    size_t i = s.rfind(c);
    cout << i << endl;
    i = s.find(c);
    cout << i << endl;
}
