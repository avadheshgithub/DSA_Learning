/*
        ## print index of a given element in a array . if not present return -1
*/


#include<iostream>
// #include<bits/stdc++.h>
#include<vector>
using namespace std;

int printIndex(int arr[],int n,int ele,int idx){
    if(arr[idx]==ele) return idx;
    if(idx==n) return -1;
    return printIndex(arr,n,ele,idx+1);
}

int search(vector<int>& a,int idx,int tgt){
    if(idx==a.size()) return -1;
    if(a[idx]==tgt) return idx;
    return search(a,idx+1,tgt);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int ele = 2;
    int n = 7;
    cout<<printIndex(arr,n,ele,0)<<endl;

    vector<int>a = {1,9,2,8,3,8};
    cout<<search(a,0,10);
}