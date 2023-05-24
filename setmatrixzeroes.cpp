#include <bits/stdc++.h>
using namespace std;
// #include <vector>

void setZeros(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Step 1: Mark rows and columns to be set as zero
    vector<bool> rowZeros(rows, false);
    vector<bool> colZeros(cols, false);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                rowZeros[i] = true;
                colZeros[j] = true;
            }
        }
    }

    // Step 2: Set rows and columns to zero
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (rowZeros[i] || colZeros[j]) {
                matrix[i][j] = 0;
            }
        }
    }

    // Print the modified matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> m(2, vector<int>(3));
    m[0] = {1, 2, 3};
    m[1] = {0, 4, 5};
    setZeros(m);

    return 0;
}
