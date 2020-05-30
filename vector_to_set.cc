#include <iostream>
#include <set>
#include <vector>
using namespace std;

void output11(set<int> s) {
	for (const auto& x : s) {
		cout << x << endl;
	}
}

int main() {
	vector<int> v = {19, 3, 5, 6, 2, -1, 4};
	set s(v.begin(), v.end());
	output11(s);
	return 0;
}