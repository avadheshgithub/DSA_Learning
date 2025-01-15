#include<iostream>
using namespace std;

// Q   given a sorted array of n element and a target 'x' . find the first occurance of x in the aray. if x doses exiest then return -1;


int main(){
    int arr[] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int x = 3;
    int n = 13;
    int low = 0;
    int high = n-1;
    bool flag = false;

    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x) {
                flag =true;
                cout<<mid;
                break;
            }
            else {
                high = mid-1;
            } 
        }
        if(arr[mid]>x) high = mid-1;
        if(arr[mid]<x) low = mid+1;
    }
    if(flag==false) cout<<-1;
}