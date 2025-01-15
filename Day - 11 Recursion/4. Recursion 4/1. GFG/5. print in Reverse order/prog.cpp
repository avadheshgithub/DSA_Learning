/*
    ## Print the array in reverse order 

*/

#include<iostream>
// #include<bits/stdc++.h>
#include<vector>
using namespace std;

void printReverseArray(int arr[],int idx){
    if(idx<0) return;
    cout<<arr[idx]<<" ";
    printReverseArray(arr,idx-1);
}

void print(vector<int>& a,int idx){
    if(idx==a.size()) return;
    print(a,idx+1);
    cout<<a[idx]<<" ";
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    printReverseArray(arr,n-1);

    vector<int>a = {1,2,3,4,5,6,7};
    print(a,0);
}