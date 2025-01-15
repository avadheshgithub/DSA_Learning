#include<iostream>
using namespace std;

int main(){
    // predict the output 

     int a =15;
     int* ptr = &a;
     int b = ++(*ptr);
     cout<<a<<endl; //16
     cout<<b<<endl; // 16

    return 0;
}