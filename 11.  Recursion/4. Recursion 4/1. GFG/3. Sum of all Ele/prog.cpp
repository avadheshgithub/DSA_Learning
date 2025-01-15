/*
     # find out the sum of all elements of an Array using recursion

*/

#include<iostream>
// #include<bits/stdc++.h>
#include<vector>
using namespace std;

int sumArray(int arr[],int n,int sum,int idx){
    if(idx==n) return sum;
    return sumArray(arr,n,sum+arr[idx],idx+1);
}

int sumOfArray(vector<int>& a, int idx){
    if(idx==a.size()-1) return a[idx];
    return a[idx] + sumOfArray(a,idx+1);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    int sum = 0;
    cout<<sumArray(arr,n,sum,0)<<endl;


    vector<int>a = {1,9,2,8,3,8};
    cout<<sumOfArray(a,0);
}