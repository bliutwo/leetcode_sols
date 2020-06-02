#include<bits/stdc++.h>
using namespace std;

void output(vector<int> v) {
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {0, 1, 2, 3};
    auto x = *max_element(v.begin(), v.end());
    cout << x << endl;
	return 0;
}