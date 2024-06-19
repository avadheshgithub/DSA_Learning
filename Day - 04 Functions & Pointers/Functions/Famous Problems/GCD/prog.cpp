#include<iostream>
using namespace std;

// hcf highest common divisor

int gcd(int a,int b){
    int hcf =1;
    //for(int i=1;i<=min(a,b);i++){  // time complexity issue with itself
    for(int i=min(a,b);i>=1;i--){    // more optimized code for gcd
        if(a%i==0 && b%i==0){
            hcf =i;
        }
    }
    return hcf;
}

int main(){
    int a;
    cout<<"enter 1st number: ";
    cin>>a;
    int b;
    cout<<"enter 2nd value: ";
    cin>>b;
    cout<<gcd(a,b);
}