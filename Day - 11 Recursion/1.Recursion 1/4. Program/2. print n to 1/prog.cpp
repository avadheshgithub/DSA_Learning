/*
        ## Print n to 1  
        ## Print 1 to n
*/

#include<iostream>
using namespace std;

void printNto1(int n){
    if(n==0) return;  // base case
    cout<<n<<" "<<endl; // kaam
    printNto1(n-1); // call
}

void print1toN(int n){   // After Recursive call
    if(n==0) return;
    print1toN(n-1);  
    cout<<n<<" "<<endl; 
}

void print1toNWithExtraParaMeter(int i,int n){ 
    if(i>n) return; // base case
    cout<<i<<endl;
    print1toNWithExtraParaMeter(i+1,n);
}

int main(){
    // printNto1(5);
    // cout<<endl;
    // print1toN(5);
    // cout<<endl;
    print1toNWithExtraParaMeter(1,5);
}