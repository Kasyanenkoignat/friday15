#include <iostream>
#include <vector>
using namespace std;

void findElementsInRange(const vector<vector<int>>& matrix, int lowerBound, int upperBound) {
    cout << "Elements in the specified range [" << lowerBound << ", " << upperBound << "]:" << endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            if (num >= lowerBound && num <= upperBound) {
                cout << num << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    vector<vector<int>> matrix = { {1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9} };
    int lowerBound = 3;
    int upperBound = 7;

    findElementsInRange(matrix, lowerBound, upperBound);

    return 0;
}