#include<iostream>
using namespace std;

int main(){

    // roll num , marks
    // student

    int arr[2][4];
    // input
    cout<<"Enter the elements :";
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    // print
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}