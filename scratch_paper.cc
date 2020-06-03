#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, int> m = {{'a', 0}};
    if (m.find('a') != m.end())
        cout << "found" << endl;
    m.erase('a');
    if (m.empty())
        cout << "empty" << endl;
    if (m.find('a') == m.end())
        cout << "not found" << endl;
    return 0;
}
