/*

    ## Problem statement :-

        given an array with n distinict elements, convert the given array to a form where all elements are in the rnage from 0 to n-1. the order of the element is the same i.e. 0 is placed in the place of smallest element, 1 is the placed for the second largest element , N-1 is placed for the ;argest element.

    ## Example 

        int n = 5;
        arr =          {19   12    23    8    16} 
        replaced arr   [3    1     4     0     2] // till n-1

    ## Note :

        - order should be maintain 

*/


// Time Complexity - O(n^2)
// Space Complexity - O(n);

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {

    // Methode 01 With using Extra  Space

    /*
    int arr[] = {19,12,23,8,16};
    int n = 5;

    // Print the array
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> vec(n, 0);
    int x = 0; // 0 means not visited
    for(int i=0; i<n; i++) {
        int min = INT_MAX;
        int mindx = -1;
        for(int j=0; j<n; j++) {
            if(vec[j] == 1) continue;
            else {
                if(min > arr[j]) {
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = x;
        vec[mindx] = 1; // visited 
        x++;
    }

    // Print the array
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    */


     
    //*********** */ 2nd  MEthode without taking extra array

    int arr[] = {19,12,23,8,16};
    int n = 5;

    // Print the array
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int x = 0; // 0 means not visited
    for(int i=0; i<n; i++) {
        int min = INT_MAX;
        int mindx = -1;
        for(int j=0; j<n; j++) {
            if(arr[j] <= 0) continue;
            else {
                if(min > arr[j]) {
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = -x; // Marking as visited and storing the rank with -1 offset
        x++;
    }

    // Print the array with restored original values
    for(int i=0; i<n; i++) {
        arr[i] = -(arr[i]); // Restoring the original values
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}




