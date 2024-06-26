
/*   Peak index in Mountain array

    ## Mountain Array - elements first will increase and after a pic element it will decrease 


    arr = {1  3  5  4  3  2  1} // peak element in array is 5


*/

#include<iostream>
using namespace std;

int main(){

    // Methode 01 (Linear)
    int arr[] = {1,2,3,4,5,4,3,2,1};
    int n = 9;
    int idx = -1;
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            idx = i;
            break;
        }
    }
    cout<<idx;


    // methode 02 (Binary search)
    int low = 1;
    int high = n-2;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            idx = mid;
        }
        else if(arr[mid]>arr[mid-1]) low = mid+1;
        else high = mid-1;
    }
    cout<<idx;
}

