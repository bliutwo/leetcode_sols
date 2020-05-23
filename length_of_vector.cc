#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

int main() {
    vector<int> v(4, 0);
    cout << v.size() << endl;
    cout << typeid(v.size()).name() << endl;
    auto size = v.size();
    cout << typeid(size).name() << endl;
    size_t l = v.size();
    cout << typeid(l).name() << endl;
    return 0;
}
