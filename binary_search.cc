#include <bits/stdc++.h>
using namespace std;

int binary_search(int t, const vector<int>& A) {
    int L = 0;
    int U = A.size() - 1;
    while (L <= U) {
        int M = (U - L) / 2 + L;
        if (A[M] < t) {
            L = M + 1;
        } else if (A[M] == t) {
            return M;
        } else {
            U = M - 1;
        }
    }
    return -1;
}

int binary_search(int t, const vector<int>& A) {
    // FILL IN THIS LINE
    int U = A.size() - 1;
    while (L <= U) {
        int M = (U - L) / 2 + L;
        if (A[M] < t) {
            L = M + 1;
        } else if (A[M] == t) {
            return M;
        } else {
            U = M - 1;
        }
    }
    return -1;
}

int binary_search(int t, const vector<int>& A) {
    int L = 0;
    // FILL IN THIS LINE
    while (L <= U) {
        int M = (U - L) / 2 + L;
        if (A[M] < t) {
            L = M + 1;
        } else if (A[M] == t) {
            return M;
        } else {
            U = M - 1;
        }
    }
    return -1;
}

int binary_search(int t, const vector<int>& A) {
    int L = 0;
    int U = A.size() - 1;
    while (/* FILL IN THIS CONDITION */) {
        int M = (U - L) / 2 + L;
        if (A[M] < t) {
            L = M + 1;
        } else if (A[M] == t) {
            return M;
        } else {
            U = M - 1;
        }
    }
    return -1;
}

int binary_search(int t, const vector<int>& A) {
    int L = 0;
    int U = A.size() - 1;
    while (L <= U) {
        // FILL IN THIS LINE
        if (A[M] < t) {
            L = M + 1;
        } else if (A[M] == t) {
            return M;
        } else {
            U = M - 1;
        }
    }
    return -1;
}

int binary_search(int t, const vector<int>& A) {
    int L = 0;
    int U = A.size() - 1;
    while (L <= U) {
        int M = (U - L) / 2 + L;
        if (/*FILL IN THIS CONDITION*/) {
            L = M + 1;
        } else if (A[M] == t) {
            return M;
        } else {
            U = M - 1;
        }
    }
    return -1;
}

int binary_search(int t, const vector<int>& A) {
    int L = 0;
    int U = A.size() - 1;
    while (L <= U) {
        int M = (U - L) / 2 + L;
        if (A[M] < t) {
            // FILL IN THIS LINE
        } else if (A[M] == t) {
            return M;
        } else {
            U = M - 1;
        }
    }
    return -1;
}

int binary_search(int t, const vector<int>& A) {
    int L = 0;
    int U = A.size() - 1;
    while (L <= U) {
        int M = (U - L) / 2 + L;
        if (A[M] < t) {
            L = M + 1;
        } else if (/* FILL IN THIS CONDITION */) {
            return M;
        } else {
            U = M - 1;
        }
    }
    return -1;
}

int binary_search(int t, const vector<int>& A) {
    int L = 0;
    int U = A.size() - 1;
    while (L <= U) {
        int M = (U - L) / 2 + L;
        if (A[M] < t) {
            L = M + 1;
        } else if (A[M] == t) {
            // FILL IN THIS LINE
        } else {
            U = M - 1;
        }
    }
    return -1;
}

int binary_search(int t, const vector<int>& A) {
    int L = 0;
    int U = A.size() - 1;
    while (L <= U) {
        int M = (U - L) / 2 + L;
        if (A[M] < t) {
            L = M + 1;
        } else if (A[M] == t) {
            return M;
        } else {
            // FILL IN THIS LINE
        }
    }
    return -1;
}

int binary_search(int t, const vector<int>& A) {
    int L = 0;
    int U = A.size() - 1;
    while (L <= U) {
        int M = (U - L) / 2 + L;
        if (A[M] < t) {
            L = M + 1;
        } else if (A[M] == t) {
            return M;
        } else {
            U = M - 1;
        }
    }
    // FILL IN THIS LINE
}

int main() {
    vector<int> v;
    for (int i = 0; i < 100; i++) {
        v.push_back(i);
    }
    int a = binary_search(5, v);
    int b = binary_search(101, v);
    int c = binary_search(99, v);
    int d = binary_search(0, v);
    int e = binary_search(57, v);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
}