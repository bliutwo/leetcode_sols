#include <iostream>
#include <set>
using namespace std;

void output(set<int> s) {
	set<int>::iterator it;
	for (it = s.begin(); it != s.end(); it++) {
		cout << *it << endl;
	}
}

void output11(set<int> s) {
	for (const auto& x : s) {
		cout << x << endl;
	}
}

int main() {
	set<int> s;
	s.insert(0);
	s.insert(2);
	s.insert(69);
	s.insert(-1);
	output(s);
	output11(s);
	return 0;
}