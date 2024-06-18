#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Number of Rows: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }

    return 0;
}