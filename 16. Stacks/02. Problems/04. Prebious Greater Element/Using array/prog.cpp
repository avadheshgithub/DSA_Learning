/*
    ## Previous Greater Element 
*/

#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 1, 2, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print original array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Previous greater element array
    int pge[n];
    for (int i = 0; i < n; i++) {
        pge[i] = -1; // Initialize with -1
        for (int j = i - 1; j >= 0; j--) { // Check elements to the left
            if (arr[j] > arr[i]) {
                pge[i] = arr[j];
                break;
            }
        }
    }

    // Print the PGE array
    for (int i = 0; i < n; i++) {
        cout << pge[i] << " ";
    }
    cout << endl;

    return 0;
}
