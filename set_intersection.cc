#include <iostream>
#include <vector>
#include <algorithm> // for set_intersection
using namespace std;

void output(vector<int> v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    vector<int> b = {4, 5, 6, 7, 8, 9, 10};
    vector<int> v(a.size() + b.size());
    // vector<int> v(1);
    vector<int>::iterator it;
    it = set_intersection(a.begin(), a.end(),
                          b.begin(), b.end(),
                          v.begin());
    v.resize(it-v.begin());
    output(v);
    return 0;
}