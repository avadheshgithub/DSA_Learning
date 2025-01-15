#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int last_digit ;
    int reverse = 0;
    while(n>0){
        reverse *= 10;
        last_digit = n%10;
        reverse += last_digit; 
        n /= 10;
    }
    cout<<"Reverse number is:"<<reverse;
  

    return 0;
}