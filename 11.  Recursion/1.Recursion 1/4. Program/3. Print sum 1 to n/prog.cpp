/*
        ## print sum from 1 to n (Parameterized)
*/

#include<iostream>
using namespace std;

int sum1TOn(int n) { // return type
    if (n==0) return 0; 
    return n + sum1TOn(n-1); 
}

void printsum1Ton(int sum,int n){
    if(n==0){
        cout<<sum<<endl;
        return ;
    }
    printsum1Ton(sum+n,n-1);
}


int main(){
    printsum1Ton(0,5);
    cout<<sum1TOn(5);
}