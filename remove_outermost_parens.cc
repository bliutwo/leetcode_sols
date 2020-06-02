#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> get_primitive_substrings(string s) {
    vector<string> v;
    string build = "";
    int num_unresolved = 0;
    for (size_t i = 0; i < s.length(); i++) {
        build += s[i];
        cout << build << endl;
        if (s[i] == ')' && num_unresolved == 1) {
            cout << "build: " << build << endl;
            v.emplace_back(build);
            build = "";
            num_unresolved--;
        } else {
            if (s[i] == '(')
                num_unresolved++;
            else
                num_unresolved--;
        }
        cout << num_unresolved << endl;
    }
    return v;
}
void remove_outer_parens(string& s) {
    s.erase(0, 1);
    s.erase(s.length() - 1, 1);
}
string removeOuterParentheses(string S) {
    // get primitive substrings
    vector<string> v = get_primitive_substrings(S);
    // remove outer parentheses
    string result = "";
    for (string s : v) {
        remove_outer_parens(s);
        // combine them back together
        result += s;
    }
    return result;
}

int main() {
    string s = "(()())(())";
    cout << s << endl;
    cout << removeOuterParentheses(s) << endl;
    return 0;
}