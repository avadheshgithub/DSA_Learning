#include<iostream>
using namespace std;

// 2d Array - matrix (Grid) = are arrays of array

int main(){
    

    // Declration
    int arr[3][3];


    // Initiliazation
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}}; // true
    int brr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // true
    int crr[3][3] = {1,2,3,4,5,6,7,8.9} ;// true

    //int arr[][] = {{1,2,3},{4,5,6},{7,8,9}}; // false
    //int arr[3][] = {{1,2,3},{4,5,6},{7,8,9}}; // false


    // set values
    arr[0][0] = 4;
    

    // Traverse the array
    int arrr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arrr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}