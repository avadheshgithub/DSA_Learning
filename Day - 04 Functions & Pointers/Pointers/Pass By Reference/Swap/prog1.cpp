#include<iostream>
using namespace std;

void swaps(int* x, int* y){ // cought the address and pick that value
    int temp;    // int pointer data type
    temp = *x ;  // x value stored in temp variable
    *x = *y;     // y value stored in x variable
    *y = temp;  // temp value stored in y variable
    return;
}

int main(){

    int a = 5;
    int b = 6;

    int* x = &a;
    int* y = &b;
    swaps(x,y);
    cout<<a<<" "<<b<<endl; // a = 6   b = 5
}