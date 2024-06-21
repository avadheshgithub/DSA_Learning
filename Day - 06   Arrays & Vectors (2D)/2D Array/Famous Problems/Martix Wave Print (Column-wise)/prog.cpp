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
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    // Wave print (Column Wise)
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
                cout<<arr[i][j]<<" ";
                }
            }
        else{
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
