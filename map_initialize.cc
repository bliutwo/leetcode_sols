#include <iostream>
#include <map>
using namespace std;

void output(map<char, int> m) {
	map<char, int>::iterator it;
	for (it = m.begin(); it != m.end(); it++) {
		cout << it->first << ':' << it->second << endl;
	}
}

void output11(map<char, int> m) {
	for (auto const& x : m) {
		cout << x.first << ':' << x.second << endl;
	}
}

void output17(map<char, int> m) {
	for (auto const& [key, val] : m)
	{
		cout << key << ':' << val << endl;
	}
}

int main() {
	map<char, int> m = { {'a', 0}, {'b', 1}, {'c', 2}, {'d', 3} };
	// print all ints in order
	output(m);
	output11(m);
	output17(m);
	return 0;
}