#include<iostream>
using namespace std;

void swaps(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main(){
    int a = 5;
    int b = 6;

    // Pass by refrence methode 2 using Alias 
    swaps(a,b);
    cout<<a<<" "<<b<<endl; // a = 6   b = 5

    return 0;
}