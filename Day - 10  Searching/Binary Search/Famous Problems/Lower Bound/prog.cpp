/*
Q() given a sorted integer array and an integer 'x', find lower bound of x


int main(){

    //#1  linear search (  Time complexity - O(n) )

    // arr   1  2  4  5  9  15  18  21  
    int arr[]= {1,2,4,5,9,15,18,21,24};
    int n = 9;
    int x = 12;

    // for(int i=0;i<n;i++){
    //     if(arr[i]>x){
    //         cout<<arr[i-1]; // lower baound of x;
    //         cout<<arr[i]; // upper bound of x;
    //         break;
    //     }
    // }

    

    //#2 Binary search optimized methode [ Time comclexity - O(logn)]

*/

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
            if (mid > 0) {
                cout << arr[mid - 1];
            } else {
                cout << "No lower bound exists";
            }
            break;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (flag == true) {
        if (high >= 0) {
            cout << arr[high];
        } else {
            cout << "No lower bound exists";
        }
    }

    return 0;
}
