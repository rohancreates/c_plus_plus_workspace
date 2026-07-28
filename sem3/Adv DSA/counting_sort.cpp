#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countingSort(vector<int>& arr) {
    // Step 1: Find the maximum element
    int maxElement = *max_element(arr.begin(), arr.end());

    // Step 2: Create count array
    vector<int> count(maxElement + 1, 0);

    // Step 3: Store frequency of each element
    for (int num : arr) {
        count[num]++;
    }

    // Step 4: Reconstruct the sorted array
    int index = 0;
    for (int i = 0; i <= maxElement; i++) {
        while (count[i] > 0) {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}

int main() {
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1};

    countingSort(arr);

    cout << "Sorted Array: ";
    for (int x : arr)
        cout << x << " ";

    return 0;
}