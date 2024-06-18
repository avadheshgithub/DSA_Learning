#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int count =0;
    int a = n;
    while(n>0){
        n /= 10;
        count++;
    }
    if(a==0) cout<<"Number of digit : 1"<<endl;
    else cout<<"Number of digit : "<< count;

    return 0;
}