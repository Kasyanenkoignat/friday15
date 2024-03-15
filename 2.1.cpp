#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = { {1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9} };
    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<vector<int>> transpose(cols, vector<int>(rows));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    cout << "\nTransposed Matrix:" << endl;
    for (const auto& row : transpose) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}