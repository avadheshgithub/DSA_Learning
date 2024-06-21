#include<iostream>
using namespace std;


int main(){

    // a program to print the transpose transform (in the same matrix)

                     //observe only index

    /*
            column wise printing  mean--> keep column constant and then print row
    */

    int m;
    cout<<"Enter the row number:";
    cin>>m;

    int n;
    cout<<"Enter column number:";
    cin>>n;

    // inout from the user
    int arr[m][n];
    for(int i= 0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;


    // print the matrix 
    for(int i= 0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    // printing transpose(columnwise printing)

    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}