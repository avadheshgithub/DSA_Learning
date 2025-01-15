/*
        ## Nth fibbonacci 

        1  1  2  3  5  8  13  21  34

    # Always true

        t11 = t10 + t9  ==>  Tn = Tn-1  + Tn-2

        arr[i] = arr[i-1] + arr[i-2]

        so fibo(i) = fibo(i-1) + fibo(i-2)
*/

#include<iostream>
using namespace std;

int fibbo(int n){
    if(n==1 || n==2) return 1; // 1st & 2nd term = 1
    return fibbo(n-1) + fibbo(n-2);
}
int main(){
    cout<<fibbo(8)<<endl; // 21
}


/*  ------------------TIME COMPLEXITY  -----------                                 

               #                   fibbo(5)
                     fibbo(4)                     fibbo(3)
              fibbo(3)     fibbo(2)         fibbo(2)   fibbo(1)
       fibbo(2)   fibbo(1)


    for n

        1 + 2 + 4 + 8 + -------- (n terms)

        1 + 2^1 + 2^2 + 2^3 + -----+2^n-1

        ==> O(2^n) Exponential time complexity

*/