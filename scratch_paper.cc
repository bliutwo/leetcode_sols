#include <bits/stdc++.h>
using namespace std;

void output(vector<int> v) {
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {0, 1,2,3,4};
    output(v);
    reverse(v.begin(), v.end());
    output(v);
	return 0;
}