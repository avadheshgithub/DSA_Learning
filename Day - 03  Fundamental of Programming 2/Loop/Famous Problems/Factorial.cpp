#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter value of n:";
    cin>>n;

    int fact = 1;
    for(int i=n;i>0;i--){
        fact *= i;
    }
    cout<<"Factorial of n:"<<fact;
    return 0;
}