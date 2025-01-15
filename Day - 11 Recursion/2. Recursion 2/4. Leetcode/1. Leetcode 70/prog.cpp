/*
    ## Stair path   [Leetcode ]

    either 1 step or 2 step and  their combinations

    Ex - n=5 (stairs)

        1 1 1 1 1
        1 1 1 2
        1 1 2 1
        1 2 1 1
        2 1 1 1
        2 2 1
        1 2 2
        2 1 2 

    toal num of ways -> 8

    formula

        stair(n) = stair(n-1) + stair(n-2)

*/

#include<iostream>
using namespace std;

// similar to fibbonacci

int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return stair(n-1) + stair(n-2);
}

// if we can 3 jumps then
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return stair(n-1) + stair(n-2) + stair(n-3);
}

int main(){
    cout<<stair(5)<<endl;
}