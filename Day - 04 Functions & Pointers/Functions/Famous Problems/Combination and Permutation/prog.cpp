#include<iostream>
using namespace std;

// Permuation nPr  = n! / r!*(n-r!)
// Combination ncr = n! / (n-r!)

int fact(int x){
    int f = 1;
    for(int i=2;i<=x;i++){
        f *= i;
    }
    return f;
}

int combination(int n,int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
    
}

int permutation(int n , int r){
    int npr = fact(n)/(fact(n-r));
    return npr;

}

int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;

    int r;
    cout<<"Enter r : ";
    cin>>r;

    /* Solution o1 

    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);

    int ncr = nfact/(rfact*nrfact);
    int npr = nfact/(nrfact);


    cout<<"ncr value is : ";
    cout<<ncr;

    cout<<endl;

    cout<<"npr value is : ";
    cout<<npr;
    */

   cout<<combination(n,r);

   cout<<endl;
   
   cout<<permutation(n,r);

   // Solution 02


    return 0;
}