/*
        ## Maximum element of an array 

            1. print
            2. store / return
*/

#include<iostream>
#include<vector>
using namespace std;

void printMax(int arr[],int n,int idx,int max){
    if(idx==n){
        cout<<max;
        return ;
    }
    if(max<arr[idx]) max=arr[idx];
    printMax(arr,n,idx+1,max);
}

int maxArray(int arr[],int n,int idx){
    if(idx==n) return INT32_MIN;
    return max(arr[idx],maxArray(arr,n,idx+1));
}
int main(){
    int arr[] = {2,1,6,3,9,0,2,7};
    int n = 8;
    printMax(arr,n,0,INT32_MIN);

    cout<<endl;
    cout<<maxArray(arr,n,0);
 
}