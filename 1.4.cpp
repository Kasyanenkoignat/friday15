#include <iostream>
using namespace std;

bool containsElement(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = { 5, 2, 8, 3, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    if (containsElement(arr, size, target)) {
        cout << "The array contains the element " << target << endl;
    }
    else {
        cout << "The array does not contain the element " << target << endl;
    }

    return 0;
}