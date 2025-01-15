/*
    ## Calculate the number of ways in which a person can climb n stais if he can exactly 1,2   or 3 steps at each level
*/


/*
        ## Climbing Stairs    


        total number of ways = count(n-1) + count(n-2) + count(n-3)

    - base case
            if(n==1) return 1;
            if(n==2) return 2;
            if(n==3) return 4;
*/

#include<iostream>
using namespace std;

int stair(int n){
    if (n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return stair(n-1) + stair(n-2) + stair(n-3);
}

int main(){
    cout<<stair(5)<<endl;
}