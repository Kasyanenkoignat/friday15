#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = { 5, 2, 8, 3, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int minElement = INT_MAX;
    int maxElement = INT_MIN;

    for (int i = 0; i < size; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "Minimum element in the array: " << minElement << endl;
    cout << "Maximum element in the array: " << maxElement << endl;

    return 0;
}