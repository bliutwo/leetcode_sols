#include <bits/stdc++.h>
using namespace std;

void insert_at_beginning(string& s, char c) {
    s.insert(s.begin(), c);
}

int main() {
    string s = "2345";
    cout << s << endl;
    insert_at_beginning(s, '1');
    cout << s << endl;
    insert_at_beginning(s, '0');
    cout << s << endl;
}
