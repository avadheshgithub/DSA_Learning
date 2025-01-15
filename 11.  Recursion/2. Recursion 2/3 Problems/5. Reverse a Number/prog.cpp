/*
        ## Reverse of a number  (parameterized/return)

        1. int n = 123  & r=0
        2. r*=10
        3. r+=(n%10);
        4. n/=10

        Solution -
            return type - No formula is possible to derived
*/


#include<iostream>
using namespace std;

void rev(int r, int n){
    if(n==0){
        cout<<r<<endl;
        return ;
    }
    r*=10;
    r+=(n%10);
    n/=10;
    rev(r,n);// r& n are now changed

    // rev(r*10+(n%10),n/10);
}

int Sum(int n){
    rev(0,123);

}