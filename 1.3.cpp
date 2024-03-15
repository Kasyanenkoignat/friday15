#include <iostream>
using namespace std;

int main() {
    int arr[] = { 5, 2, 8, 3, 1 }; // Sample array
    int size = sizeof(arr) / sizeof(arr[0]);
    double sum = 0;
    double average = 0;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    if (size != 0) {
        average = sum / size;
        cout << "Average value of elements in the array: " << average << endl;
    }
    else {
        cout << "Array is empty. Cannot compute average." << endl;
    }

    return 0;
}