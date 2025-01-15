/*
    Greatest Common divisor  (HCF--> highest common factor)

        ## Ex - HCF(24,60)  ans = 12

            # hcf(a,b) <= min(a,b)
            # lcm(a,b) >= max(a,b)

            for(int i=24;i>=2;i--){
                if(24%i==0 && 60%i==0) return i;
            }
            return 1;



    ## Recusion
    ## uclid division algorithm ---> long divisor methode

            long divisor = hcf

            24)60(2
               48
               ------
               12)24(2
                  24
                ------
                   0

                #   last divisor = 12 = hcf
*/

#include<iostream>
using namespace std;


int hcf(int a, int b){ // iterative solution   TC = O(min(a,b))
    for(int i=min(a,b);i>=2;i--){
        if(a%i==0 && b%i==0) return i;
    }
    return 1;
}

int GCD(int a,int b){ // recursive solution    TC = O(log(a+b))
    if(a==0) return b;
    else return GCD(b%a,a);
}
int main(){
    cout<<hcf(24,60);
}
