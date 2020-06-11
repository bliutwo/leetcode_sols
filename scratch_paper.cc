#include <bits/stdc++.h>
using namespace std;

void output_backwards(vector<int> v) {
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {0,1,2,3,4,5};
    output_backwards(v);
    return 0;
}
