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

    // inout from the user
    int arr[m][m];
    for(int i= 0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;

    // print the matrix 
    for(int i= 0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    // transpose the matrix
    for(int i= 0;i<=m-1;i++){
        for(int j=i+1;j<m;j++){
            // swap i,j & j,i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    cout<<"the matrix after matrix : "<<endl;
    for(int i= 0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}