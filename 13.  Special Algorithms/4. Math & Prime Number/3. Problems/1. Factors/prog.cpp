/*
        ## Print the factor of a number 
*/

#include<iostream>
#include<cmath>
using namespace std;

void printFactors1(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0) cout<<i<<" ";
    }
}

void printFactors2(int n){ 
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0)cout<<i<<" ";
    }

    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0) cout<<n/i<<" "; // using factors pair property
    }
}
int main(){
    printFactors2(49);
}