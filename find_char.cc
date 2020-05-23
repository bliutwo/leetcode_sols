#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "asdf";
    size_t found = s.find('d');
    cout << s << found << endl;
    return 0;
}
