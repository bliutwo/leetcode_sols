#include <iostream>
#include <vector>
#include <set>
#include <algorithm> // for set_difference
using namespace std;

/* The difference of two sets is formed by the elements
   that are present in the first set, but not in the 
   second one. */
   
void output(set<int> s) {
    for (auto x : s) {
        cout << x << endl;
    }
}

int main1() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {1, 2, 3, 4};
    vector<int> v3(v1.size() + v2.size());
    vector<int>::iterator it;
    it = set_difference(v1.begin(), v1.end(),
                        v2.begin(), v2.end(),
                        v3.begin());
    v3.resize(it - v3.begin());
    for (size_t i = 0; i < v3.size(); i++) {
        cout << v3[i] << endl;
    }               
    return 0;
}

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {1, 2, 3, 4};
    set<int> s1(v1.begin(), v1.end());
    set<int> s2(v2.begin(), v2.end());
    set<int> s3;
    set_difference(s1.begin(), s1.end(),
                   s2.begin(), s2.end(),
                   inserter(s3, s3.end()));
    output(s3);
    return 0;
}