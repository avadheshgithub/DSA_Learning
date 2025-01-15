/*
    ## Find the number of set bits for sny integer

        set bit -- in binary form where bit is 1
        offbit or unset bit

        Ex -
            13 --> 00001101
            ans =  3
*/
#include<iostream>
using namespace std;

int count_set_bits(int n){
    // inbuilt function to count
    return __builtin_popcount(n);
}

/* brian kerrnigens algorithm   
    (x&x-1) -->some part same and some part flipped (binary form)
    and apply & operator --> it flipped 1-->0 
    and count++;
*/

int count_set_bits2(int n){
    int count=0;
    while(n>0){
        count++;
        n = (n&(n-1));
    }
    return count;
}
int main(){
    cout<<count_set_bits(13)<<endl; // 3
     cout<<count_set_bits2(13)<<endl; // 3
}