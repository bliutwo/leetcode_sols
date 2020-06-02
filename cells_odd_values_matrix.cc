#include <iostream>
#include <vector>
using namespace std;

void increment_matrix(vector<vector<int>>& matrix, int ri, int ci, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == ri) {
                matrix[i][j] += 1;
            }
            if (j == ci) {
                matrix[i][j] += 1;
            }
        }
    }
}

void print_matrix(vector<vector<int>>& matrix, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int oddCells(int n, int m, vector<vector<int>>& indices) {
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    // print_matrix(matrix, n, m);
    for (size_t i = 0; i < indices.size(); i++)
    {
        vector<int> pair = indices[i];
        int ri = pair[0];
        int ci = pair[1];
        increment_matrix(matrix, ri, ci, n, m);
        // print_matrix(matrix, n, m);
    }
    int num_odd = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] % 2 != 0) {
                num_odd++;
            }
        }
    }
    return num_odd;
}

int main() {
    vector<vector<int>> v = {{0, 1}, {1, 1}};
    cout << oddCells(2, 3, v) << endl;
    return 0;
}