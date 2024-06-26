#include <iostream>  
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: "<<endl;
    for(int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;

    // Insertion sort
    for(int i=1; i<n; i++) { // First element is already considered sorted
        int j = i;
        while(j >= 1 && arr[j]<arr[j-1]) {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }

    cout << "After the Insertion sort: "<<endl;
    for(int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}
