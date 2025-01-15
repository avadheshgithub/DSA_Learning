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

    // print
    int max = INT32_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    cout<<"the max element is : "<<max;

    return 0;
}