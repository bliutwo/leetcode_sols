#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s = "012345";
	cout << s << endl;
	reverse(s.begin(), s.end());
	cout << s << endl;
	return 0;
}