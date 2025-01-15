#include<iostream>
#include<vector>
using namespace std;

/*
    ## Time complexity : O(n)
    ## Space Complexity : O(1)


*/
int main(){

    int arr[] = {2,1,56,3,26};

    // int n;
    int n = sizeof(arr)/sizeof(arr[0]);

    // check if a array is sorted or not
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }
    if(flag == true) cout<<"Given array is sorted ";
    else cout<<"Fiven array is not sorted ";


}