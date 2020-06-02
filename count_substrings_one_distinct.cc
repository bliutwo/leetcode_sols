#include <iostream>
#include <set>
using namespace std;

int countLetters(string S) {
    int num_str{};
    set<string> m;
    for (size_t len = 1; len <= S.length(); len++) {
        for (size_t i = 0; i < S.length() - len + 1; i++) {
            string substring = S.substr(i, len);
            if (m.find(substring) != m.end()) {
                num_str++;
            } else if (substring.length() == 1) {
                num_str++;
                m.insert(substring);
            } else {
                char first_letter = substring[0];
                bool distinct = true;
                for (size_t a = 1; a < substring.length(); a++) {
                    if (substring[a] != first_letter) {
                        distinct = false;
                        break;
                    }
                }
                if (distinct) {
                    m.insert(substring);
                    num_str++;
                }
            }
        }
    }
    return num_str;
}

int main() {
    string s = "aaaba";
    cout << countLetters(s) << endl;
    string t = "aaaaaaaaaa";
    cout << countLetters(t) << endl;
    return 0;
}