#include<iostream>
using namespace std;

void swaps(int* x, int* y){
    int temp; 
    temp = *x ; 
    *x = *y;     
    *y = temp; 
    return;
}

int main(){
    int a = 5;
    int b = 6;

    swaps(&a,&b);
    cout<<a<<" "<<b<<endl; // a = 6   b = 5
    
    return 0;
}