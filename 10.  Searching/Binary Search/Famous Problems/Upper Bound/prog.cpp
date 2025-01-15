#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 5, 9, 15, 18, 21, 24};
    int n = 9;
    int x = 12;
    int low = 0;
    int high = n - 1;
    bool flag = true;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            flag = false;
            cout << arr[mid - 1];
            break;
        }
        else if (arr[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    if (flag == true) cout << arr[high]; // lower bound      # For Upper Bound cout<<arr[low]
    else cout << "No lower bound exists";


    return 0;
}
