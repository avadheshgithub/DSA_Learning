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
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}