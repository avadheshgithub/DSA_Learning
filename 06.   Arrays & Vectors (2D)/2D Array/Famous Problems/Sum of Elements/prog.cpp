#include<iostream>
using namespace std;

int main(){

    int m;
    cout<<"Enter m value : ";
    cin>>m;

    int n;
    cout<<"Enter n value : ";
    cin>>n;

    int arr[m][n];

    // input
    cout<<"Enter the elements :";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    // sum of all element
    int Sum = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            Sum += arr[i][j];
        }
    }
    cout<<"the max element is : "<<Sum;

    return 0;
}