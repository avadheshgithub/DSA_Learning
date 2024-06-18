#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum = 0;
    int last_digit;
    while(n>0){
        last_digit = n%10;
        sum += last_digit;
        n /= 10;
    }
    cout<<"sum of digits of number :"<<sum<<endl;

    return 0;
}

