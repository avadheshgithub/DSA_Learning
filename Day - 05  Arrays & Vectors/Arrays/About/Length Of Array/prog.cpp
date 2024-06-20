#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6};
    
    // size of array (n)

    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"the length of array is : "<<n;
    
    return 0;
}