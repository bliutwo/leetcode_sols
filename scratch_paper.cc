#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {0,1,2,3,4,5};
    vector<int> v2 = {0, 1, 2, 3, 5, 4};
    if (is_sorted(v1.begin(), v1.end())) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    if (is_sorted(v2.begin(), v2.end())) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
