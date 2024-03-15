#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = { {1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9} };
    int size = matrix.size();
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < size; ++i) {
        mainDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][size - i - 1];
    }

    cout << "Sum of elements on the main diagonal: " << mainDiagonalSum << endl;
    cout << "Sum of elements on the secondary diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}