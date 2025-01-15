/*
        ## Maximum Sum subArray of size k    

---------------------------------------------------------------------

    Note - Subarray is continious always 

    Ex - n=9 && k=3
     arr = {7,1,2,5,8,4,9,3,6}


     1. Brute force  i=0;i<n-k;i++{
        j=i;j<i+k;j++
     }

#include<iostream>
using namespace std;
int main(){
    int arr[]= {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxSum=INT32_MIN;
    int maxIdx=-1;
    for(int i=0;i=n-k;i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum+=arr[j];
        }
        if(maxSum<sum){
            maxSum=sum;
            maxIdx=i;
        }
    }
    cout<<maxSum<<endl;
    cout<<maxIdx<<endl;
}

--------------------------------------------------------------------------

/*

        ## now using sliding window

        arr = {                 }
                i--> first ele           j--> last ele   of window

        curr window sum = pre window sum + arr[j] - arr[i-1]

        ----------------------------------------------------------

        int arr[] = {  1,2,3,4,5,6,7,8,9,0};
        int n = 10;
        int k=3;
        int maxSum = INT_MIN;
        int maxIdx=0;
        int Sum = 0;
        for(int i=0;i<k;i++){
            Sum+=arr[i];
        }
        maxSum = Sum;
        int i=1;
        int j=k;
        while(j<n){
            int Sum = Sum+arr[j]-arr[i-1];
            if(maxSum<currSum){
                maxSum = Sum;
                maxIdx = i;
            }
            i++;
            j++;
        }
        cout<<maxsum<<endl;
        cout<<maxIdx<<endl;
            
*/