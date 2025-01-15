/*
        ## Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion

        a=1  && b=9

*/

#include<iostream>
using namespace std;

void print(int x, int n){
    if(x>n) return;
    cout<<x<<" ";
    print(x+2,n);
}

int main(){
    print(1,9);
}