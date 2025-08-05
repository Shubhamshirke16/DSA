//selectionSort using recursion
#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int startIndex) {
    int n = arr.size();
    
    // Correct base case
    if(startIndex >= n - 1)
    {
        return;
    }
    
    // Find the index of the minimum element in the unsorted part
    int minIndex = startIndex;
    for (int i = startIndex + 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    
    // Swap the smallest found with the current start index
    swap(arr[startIndex], arr[minIndex]);

    // Recursive call for the next index
    selectionSort(arr, startIndex + 1);
}

int main() {
    vector<int> arr = {5, 1, 4, 2, 8};

    selectionSort(arr, 0);

    cout << "Sorted array: ";
    for (int num : arr)
        cout << num << " ";

    return 0;
}
