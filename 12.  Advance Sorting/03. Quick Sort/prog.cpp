/*
    ## Quick Sort --> Inbuilt Sort approx --> used by the system

    # Complexity -

        TC - O(nlogn)--> Avg Case      
            - Worst case - O(n^2) already sorted
            # Sol - Randomized Pivot Element = arr[(si+ei)/2]
        SC - O(logn)
    
    ## Process
        1. pivot index && its element  (First ELement) 
        2. pivot ko right place pe
            count++ ele less than pivot
            pivot index = count+start;
      - partition
        3. now recursion on left than pivot and right than pivot

    ## Not Stable - because of swapping   

*/

#include <iostream>
using namespace std;

// Partition function: places pivot at the correct position
int partition(int arr[], int si, int ei) {
    int pivotElement = arr[si];
    int count = 0;

    // Count elements less than or equal to the pivot
    for (int i = si + 1; i <= ei; i++) {
        if (arr[i] <= pivotElement) count++;
    }

    // Place the pivot at the correct index
    int pivotIdx = count + si;
    swap(arr[si], arr[pivotIdx]);

    // Arrange elements around the pivot
    int i = si, j = ei;
    while (i < pivotIdx && j > pivotIdx) {
        while (arr[i] <= pivotElement) i++;
        while (arr[j] > pivotElement) j--;
        if (i < pivotIdx && j > pivotIdx) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}

// Quick Sort function
void quickSort(int arr[], int si, int ei) {
    if (si >= ei) return;

    // Partition the array
    int pi = partition(arr, si, ei);

    // Recursively sort the left and right partitions
    quickSort(arr, si, pi - 1);
    quickSort(arr, pi + 1, ei);
}

// Main function
int main() {
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
