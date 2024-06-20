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
    int max = arr[0];                 // int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]) max = arr[i];
    }
     cout<<"max element is : "<<max<<endl;


    // min element 
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]) min = arr[i];
    }
    cout<<"min element is : "<<min<<endl;

    return 0;
}