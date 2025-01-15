#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Number of Rows: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        // empty space 
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        // stars
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}