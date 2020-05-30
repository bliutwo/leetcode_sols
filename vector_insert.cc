#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {0, 1, 2, 4, 5};
    v.insert(v.begin() + 3, 3);
    for (int elem : v) {
        cout << elem << endl;
    }
    return 0;
}
