/*
        ## minimum Element of an Array
*/

#include<iostream>
// #include<bits/stdc++.h>
#include<vector>
using namespace std;

int minArray(int arr[],int n,int idx){
    if(idx==n) return INT32_MAX;
    return min(arr[idx],minArray(arr,n,idx+1));
}

int minimum(vector<int>& a,int idx,int mini){
    if(idx==a.size()) return mini;
    mini = min(mini,a[idx]);
    return minimum(a,idx+1,mini);
}

int main(){
    int arr[] = {9,8,7};
    int n = 3;
    cout<<minArray(arr,n,0)<<endl;


    vector<int>a = {1,9,2,8,3,8};
    int mini = INT32_MAX;
    cout<<minimum(a,0,mini);

}