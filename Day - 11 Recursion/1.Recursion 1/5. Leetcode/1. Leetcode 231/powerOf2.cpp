/*
  ## positive integer,return true if it is a power of 2     [Leetcode 231]

        n=64    ans = true
*/

#include<iostream>
using namespace std;


bool isPowerOfTwo(int n) {
        if(n==0) return false;
        if(n==1) return true;
        if(n%2 != 0) return false;
        return isPowerOfTwo(n/2);
};

int main(){
        cout<<isPowerOfTwo(5);
}