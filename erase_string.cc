#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "asdf";
    cout << s << endl;
    s.erase(2, 1);
    cout << s << endl;
    return 0;
}
