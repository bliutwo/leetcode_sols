void construct_map(map<char, int>& m, string& order) {
    char c;
    for (int i = 0; i < order.size(); i++) {
        c = order[i];
        m[c] = i;
    }
}

bool sorted_lexic(string& curr, string& next, map<char, int>& m) {
    if (curr == next) {
        return true;
    }
    if (curr.length() > next.length() and curr.find(next) != string::npos) {
        return false;
    }
    int length = curr.length() < next.length() ? curr.length() : next.length();
    char a;
    char b;
    for (int i = 0; i < length; i++) {
        a = curr[i];
        b = next[i];
        if (m[a] < m[b]) {
            return true;
        }
        if (m[a] > m[b]) {
            return false;
        }
    }
    return true;
}

bool isAlienSorted(vector<string>& words, string order) {
    map<char, int> m;
    construct_map(m, order);
    for (size_t i = 0; i < words.size() - 1; i++) {
        string curr = words[i];
        string next = words[i+1];
        if (!sorted_lexic(curr, next, m)) {
            return false;
        }
    }
    return true;
}