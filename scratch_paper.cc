#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<string, vector<string>, function<bool(string, string)>> min_heap([](const string& a, const string& b) { return a.length() >= b.length(); });
}
