/*
    ## Next Greater Element 

    arr  3   1   2   5   4   6   2   3

    so in right way ----> find just first greater element of each element
        for 3 --> 5
        1-----> 2
        2-----> 5
        5-----> 6
        4----->6
        6 ----> NO  (-1)
        2----->3
        3-----> No (-1)

    ## Brute force element
*/
#include<bits/stdc++.h>
// #include<iostream>
// #include<stack>
// #include<algorithm>
using namespace std;

int main(){
    int arr[] = {3,1,2,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Next greater element array
    int nge[n];
    for(int i=0;i<n;i++){
        nge[i]=-1;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                nge[i] = arr[j];
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;
}