/*
        ## Given an integer array. find the length of longest subarray which has maximum possible bitwise AND Value

        hint - high value & low value = low value
            #   value &  value = value

        but we need maximum bitwise and value
            so find maximum value that would be the ans

            find max and use sliding window and 

        arr = {12,3,1,6,1,6,6,6,6,4,3,8,13,13,13,8}

        that subarrya which has the same value and highest value in arr
*/

#include<iostream>
using namespace std;

int main(){
    int arr[] = {12,3,1,6,1,6,6,6,6,4,3,8,13,13,13,8};
    int n = 16;
    int ans=0;
    int max_Ele = INT32_MIN;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max_Ele){
            max_Ele=arr[i];
            count=1;
        }
        else if (arr[i]==max_Ele){
            count++;
        }
        ans = max(ans,count);
    }
    cout<<ans<<endl;
}