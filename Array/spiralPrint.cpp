#include <vector>
#include <iostream>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;

    int m = matrix.size();       // number of rows
    int n = matrix[0].size();    // number of columns
    vector<vector<int>> k(m, vector<int>(n, 0));  // track visited cells

    int left = 0, right = n - 1, top = 0, bottom = m - 1;

    while (left <= right && top <= bottom) {
        // Traverse from left to right
        for (int j = left; j <= right; ++j) {
            if (k[top][j] == 0) {
                result.push_back(matrix[top][j]);
                k[top][j] = 1;
            }
        }
        ++top;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; ++i) {
            if (k[i][right] == 0) {
                result.push_back(matrix[i][right]);
                k[i][right] = 1;
            }
        }
        --right;

        // Traverse from right to left
        if (top <= bottom) {
            for (int j = right; j >= left; --j) {
                if (k[bottom][j] == 0) {
                    result.push_back(matrix[bottom][j]);
                    k[bottom][j] = 1;
                }
            }
            --bottom;
        }

        // Traverse from bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                if (k[i][left] == 0) {
                    result.push_back(matrix[i][left]);
                    k[i][left] = 1;
                }
            }
            ++left;
        }
    }

    return result;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> spiral = spiralOrder(matrix);

    // Print result
    for (int val : spiral) {
        cout << val << " ";
    }

    return 0;
}
