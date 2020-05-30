#include <iostream>
#include <vector>
#include <algorithm> // necessary for find
using namespace std;

int main () {
    vector<int> v = {0, 1, 2, 3, 4, 5};
    auto it = find(v.begin(), v.end(), 3);
    int index = distance(v.begin(), it);
    cout << index << endl;
    return 0;
}
