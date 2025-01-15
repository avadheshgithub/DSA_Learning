#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,5,67,43,56,85,98};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 18;
    bool flag = true;
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid  = low + high/2; // low+(high-low)/2  beacuse of integer range
        if(arr[mid]==target){
            flag = false;
                break;
            }
        else if (arr[mid]<target) low = mid+1;
        else high = mid-1;
    }

    if(flag==true) cout<<"Element found at"<<endl;
    else cout<<"Element not found"<<endl;

}