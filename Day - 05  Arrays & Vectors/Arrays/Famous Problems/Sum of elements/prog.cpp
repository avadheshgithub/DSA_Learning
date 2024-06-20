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

    // print sum
    int sum =0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    cout<<"the sum of all element is : "<<sum;
    return 0;
}