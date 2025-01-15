/*
    # Sum of digits      
*/

#include<iostream>
using namespace std;

void SumOfDigit(int s, int n){
    if(n==0){
        cout<<s;
        return;
    }
    return SumOfDigit(s+(n%10), n/10);
    
}

int Sum(int n){
    if(n==0) return 0;
    return n%10 + Sum(n/10);

}

int main(){
    int sum=0;
    int n = 105;
    while(n!=0){
        sum +=(n%10);
        n/=10;
    }
    cout<<sum<<endl;

    cout<<Sum(100)<<endl;
    SumOfDigit(0,100);
}