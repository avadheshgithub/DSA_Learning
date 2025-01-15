/*
        ## Power function (logarithmic)

        x^n = x + x^n-1

     ------->   TC - O(log2 n)
        2^16 --> (2^8)^2 --> ((2^4)^2)^2 --> 

        =    2^16
        =    2^8*2^8
        =    2^4*2^4
        =    2^2*2^2
        =    (2^1*2^1)
*/

#include<iostream>
using namespace std;

int pow(int x,int n){  // TC - O(n)
    if(n==0) return 1;
    return x*pow(x,n-1);
}

int pow2(int x,int n){  // TC & SC - O(log n)
    if(n==1) return 1;
    int ans = pow(x,n/2);
    if(n%2==0) return ans*ans;
    else return ans*ans*x;
}

int main(){
    cout<<pow(3,4);
    cout<<endl;
    cout<<pow2(3,4);
}