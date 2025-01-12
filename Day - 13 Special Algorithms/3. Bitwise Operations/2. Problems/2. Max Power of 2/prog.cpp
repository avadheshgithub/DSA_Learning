/*
        ## given an integer n, find the maximum power of two that is smaller than n

        # Ex -
            n=24
            ans=16

            24 - 11000   ( ans--> MSB & right part 0)
            16 - 10000

        sol - find the MSB & right shift by 1 bit (all zero's)

    ##    using previous question algo, just before of 0 , return that num



    # MEthode 02
        make all 0--> 1 using or operator
        and at last devide by 2

        Ex - n=24
        bn = 110000
        after or operaotor
        bn = 111111 => 32
        so devide by 2 using shift operator
        ans = 16


*/
#include<iostream>
using namespace std;

int max_power_of2(int n){ // or operator for making all zero's to ---> 1
    n = n|(n>>1);
    n = n|(n>>2);
    n = n|(n>>4);
    n = n|(n>>8);
    n = n|(n>>16);
    return (n+1)>>1; // half using shift operator
}

int main(){
    int x = 24;
    int temp;
    while(x!=0){
        temp = x;
        x = x&(x-1);
    }
    cout<<temp<<endl; // 16

    cout<<max_power_of2(24)<<endl;// 16
}