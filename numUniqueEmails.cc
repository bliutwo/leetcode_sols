#include <bits/stdc++.h>
using namespace std;

int numUniqueEmails(vector<string>& emails) {
    set<string> unique_emails;
    for (string s : emails) {
        size_t at_index = s.find('@');
        string local(s.begin(), s.begin() + at_index);
        string domain(s.begin() + at_index + 1, s.end());
        // find .
        for (size_t i = 0; i < local.length(); i++) {
            char c = local[i];
            if (c == '.') {
                local.erase(i, 1);
                i--;
            }
        }
        // find +
        size_t plus_index = local.find('+');
        string new_local(local.begin(), local.begin() + plus_index);
        string email = new_local + "@" + domain;
        unique_emails.insert(email);
    }
    return unique_emails.size();
}

int main() {
    vector<string> v = {"testemail@leetcode.com","testemail1@leetcode.com","testemail+david@lee.tcode.com"};
    cout << numUniqueEmails(v) << endl;
    return 0;
}