#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Number of Rows: ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}