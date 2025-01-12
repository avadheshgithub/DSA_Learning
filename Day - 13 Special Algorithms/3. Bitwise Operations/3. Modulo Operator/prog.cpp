/*
    ## Modulo Operator (%)

    let we have two values a and b are very big value and any operaiton on it --> it can overflow the range of integers

    ---> 10^9+7  (generally used for modulo to prevent intger range overflow)

    Formula 
        
        1. (a+b)%c  = (a%c + b%c) % c
        2. (a*b)%c = (a%c * b%c) % c
        3. (a-b)%c  = (a%c - b%c + c) % c
*/

//---------------------------------------------------------------------------------


// Q(1) factorial of first to 25 and modulo the result by 10^9+7;
/*
        fact[i] = i*fact[i-1]

        so use formula (a*b)%c = (a%c * b%c) % c

        fact[i] = (i%c * fact[i]%c) % c

*/

#include<iostream>
#include<vector>
using namespace std;

vector<long long>factorial(int n){
    vector<long long>fact(n+1,1);
    int MOD = 1000000000 + 7;
    for(int i=2;i<=n;i++){
        fact[i] = ((i%MOD) * (fact[i-1]%MOD)) % MOD;
    }
    return fact;

}
int main(){
    vector<long long>res = factorial(25);
    for(int i=0;i<res.size();i++){
        cout<<i<<"! = "<<res[i]<<endl;
    }
}