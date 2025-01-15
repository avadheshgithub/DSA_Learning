#include<iostream>
using namespace std;

int main(){

        // store transpose in third matrix
    int m;
    cout<<"Enter the row number:";
    cin>>m;

    int n;
    cout<<"Enter column number:";
    cin>>n;

    int arr[m][n];
    for(int i= 0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;

    
    for(int i= 0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // store the transpose in third matrix
    int t[n][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            t[i][j] = arr[j][i];
        }
    }

    // printing transpose matrix
    for(int i= 0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}