#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the n value : ";
    cin>>n;

    int arr[n];
    // input
    cout<<"Enter the inputs : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // max element
    int max = INT32_MIN;                 
    for(int i=0;i<n;i++){
        if(max<arr[i]) max = arr[i];
    }
    cout<<"max element is : "<<max<<endl;


    // second largest element
    int smax = INT32_MIN;
    for(int i=0;i<n;i++){
        if(smax<arr[i] && arr[i] != max) smax = arr[i];
    }
    cout<<"smax element is : "<<smax<<endl;

    return 0;
}