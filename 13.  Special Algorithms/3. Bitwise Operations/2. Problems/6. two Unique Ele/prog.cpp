/*
    ## Given an integer array nums, in which exactly two elements appear only once and all other elements appear exactlt twice. find the two elements that appears only once

    Arr = {1,2,1,3,5}
*/

#include<iostream>
using namespace std;

void Two_unique_ele(int *arr,int n){
    int res=0;
    for(int i=0;i<n;i++) res = res^arr[i];
    int temp = res;
    int k=0; // find that first set bit
    while(true){
        if((temp&1)==1){
            break;
        }
        temp = temp>>1;
        k++;
    }
    int retval = 0;
    for(int i=0;i<n;i++){
        int num = arr[i];
        if(((num>>k)&1)==1) retval^=num;  // check kth bit i set or not ?
    }
    cout<<retval<<endl;
    res = retval^res;
    cout<<res<<endl;
}
int main(){
    int arr[] = {1,2,1,5,5,2,9,10};
    int n = 8;
    Two_unique_ele(arr,n);
}