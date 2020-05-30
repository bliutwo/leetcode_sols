#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void print_vector(vector<int>& v) {
	string s = "";
	for (int i = 0; i < v.size(); i++) {
		s += to_string(v[i]);
	}
	cout << s << endl;
}

int main() {
	vector<int> v = {0, 1, 2, 3, 4, 5};
	print_vector(v);
	reverse(v.begin(), v.end());
	print_vector(v);
	return 0;
}