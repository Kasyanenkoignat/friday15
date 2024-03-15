#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void findPairsWithSum(int arr[], int size, int targetSum) {
    unordered_set<int> complementSet;
    vector<pair<int, int>> pairs;

    for (int i = 0; i < size; ++i) {
        int complement = targetSum - arr[i];
        if (complementSet.find(complement) != complementSet.end()) {
            pairs.push_back(make_pair(arr[i], complement));
        }
        complementSet.insert(arr[i]);
    }

    if (pairs.empty()) {
        cout << "No pairs found in the array with the sum " << targetSum << endl;
    }
    else {
        cout << "Pairs found in the array with the sum " << targetSum << ":" << endl;
        for (const auto& pair : pairs) {
            cout << "(" << pair.first << ", " << pair.second << ")" << endl;
        }
    }
}

int main() {
    int arr[] = { 5, 2, 8, 3, 1, 6, 7 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 9;

    findPairsWithSum(arr, size, targetSum);

    return 0;
}