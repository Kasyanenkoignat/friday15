#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void findDuplicates(int arr[], int size) {
    unordered_map<int, int> frequencyMap;
    vector<int> duplicates;

    for (int i = 0; i < size; ++i) {
        frequencyMap[arr[i]]++;
    }

    for (auto const& pair : frequencyMap) {
        if (pair.second > 1) {
            duplicates.push_back(pair.first);
        }
    }

    if (duplicates.empty()) {
        cout << "No duplicates found in the array." << endl;
    }
    else {
        cout << "Duplicate elements in the array: ";
        for (int duplicate : duplicates) {
            cout << duplicate << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = { 5, 2, 8, 3, 1, 2, 8, 3, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, size);

    return 0;
}