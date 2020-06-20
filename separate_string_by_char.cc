#include <bits/stdc++.h>
using namespace std;

vector<string> separate(string s, char c) {
    vector<int> indices;
    for (size_t i = 0; i < s.length(); i++) {
        if (c == s[i]) {
            indices.push_back(i);
        }
    }
    int curr = 0;
    vector<string> res;
    for (int index : indices) {
        string s2(s.begin() + curr, s.begin() + index);
        res.push_back(s2);
        curr = index + 1;
    }
    string last(s.begin() + curr, s.end());
    res.push_back(last);
    return res;
}

void output(vector<string> v) {
    for (string s : v) {
        cout << s << " ";
    }
    cout << endl;
}

int main() {
    string s = "0:start:0";
    vector<string> v = separate(s, ':');
    output(v);
}
