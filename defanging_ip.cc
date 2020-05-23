#include <iostream>
#include <string>
using namespace std;

string defangIPaddr(string address) {
    int i = 0;
    while (i < address.length()) {
        if (address[i] == '.') {
            address.insert(i, "[");
            address.insert(i+2, "]");
            i = i + 3;
        } else {
            i++;
        }
    }
    return address;
}

int main() {
    cout << defangIPaddr("1.1.1.1") << endl;
    cout << defangIPaddr("255.100.50.0") << endl;
    return 0;
}
