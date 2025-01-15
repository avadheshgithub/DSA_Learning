/*
        ## Prime Number - 2 facotrs only ( 1 & the number itself)

        #Ex - 23  factors --> 1,23

        Note - 2 is only Even Prime Number
*/

#include<iostream>
#include<cmath>
using namespace std;

bool isPrime1(int n){  // TC = O(n)
    if(n==1) return false;
    for(int i=2;i<=n-1;i++){
        if(n%i==0) return false;
    }
    return true;
}

bool isPrime2(int n){    // TC = (✓n)
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    cout<<isPrime1(2)<<endl;
    cout<<isPrime2(2)<<endl;
}


/*

## Prime Number factor observation

    1. 60 -> 1 2 3 4 5 6 10 12 15 20 30 60 (all in pair that multiply = 60)
    2. 9 --> 1 3 - 9  (3 is also in pair it is not shown because 9 in perfect pair)

    Prime - 2 factor
    Composite - even number of factor except perfect square ( in pairs)


    Note - 
    60 -> 1 2 3 4 5 6 10 12 15 20 30 60           sqrt(60) = 7.7
    #     ----------   ----------------
    #         n               n
    #    half factor     half factor

    16 -> 1 2 4 8 16
    #     ---   ----
    #      n      n

    Hint - if any number has facotor except 1 & n , then for sure half of the factor will be liew before sqrt(n);

    so from 2 to sqrt(n) ke bich me hi koi ek factor mil jayega if it is not prime number so loop i=2 to sqrt(n);


*/