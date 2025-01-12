/*
    ## minimum number of bits to convert from one number to another


    Ex -
       x = 5  ---> 0101
       y = 11 ---> 1011 
        so numbers of bits flips required will be 3

    logic- 
        1. both x & y binary form
        2. check both bits if they have same bits --> no chnages
        3. if bits are diff --> change  so count++;

        ## goal - calculate how many bits are diff

        xor operation between x & y
        1. if they same -> 0
        2. if they diff -> 1

        in ans - 1 denots => changes required  mean count++ => count setBits
*/

#include<iostream>
using namespace std;

int main(){
    int x=23;
    int y=32;
    cout<<__builtin_popcount(x^y)<<endl; // xor and count setBits
}