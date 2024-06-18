#include<iostream>
using namespace std;

int main(){
    
    // Solution 01
    
    int n,j;
    cout<<"Number of Rows: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        // spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }


    // Solution 02

    int nst = 1; // number of stars
    int nsp = n-1; // number of spaces
    int k;

    for(int  i=0;i<=nsp;j++){
        cout<<" ";
    }
    nsp--;

    for(int k=1;k=nst;k++){
        cout<<"*";

    }
    nst+=2;

    return 0;
}