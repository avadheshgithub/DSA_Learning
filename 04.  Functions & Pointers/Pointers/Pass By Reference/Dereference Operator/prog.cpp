#include<iostream>
using namespace std;

// Dereference opeerator --> *P

int main(){

    int x = 122;
    int* p = &x;
    cout<<p<<endl; //address of x  (0x61ff08)
    cout<<*p<<endl; // which add pointer stored, go there and pick that value (122)

    x = 90;
    cout<<p<<endl; // add of x (0x61ff08) // after updation add value is same
    cout<<*p<<endl; // (90)

    *p = 6;
    cout<<x<<endl; //x = 6  // value of x updated;
    return 0;
}