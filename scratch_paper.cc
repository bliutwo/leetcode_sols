#include<bits/stdc++.h>
using namespace std;

void output(vector<int> v) {
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {2,56,3,6,90};
    output(v);
    sort(v.begin(), v.end(), greater<int>());
    output(v);
	return 0;
}