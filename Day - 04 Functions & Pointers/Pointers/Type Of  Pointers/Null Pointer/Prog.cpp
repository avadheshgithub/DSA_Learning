#include<iostream>
using namespace std;
int main(){

    int* ptr; 
    cout<<ptr<<endl; //  98d057fc   Garbage address 

    // now (null Pointer ---- Add 0 always)
    int* ptr1 = NULL; 
        // or
    int* ptr2 = 0;
        // or
    int* ptr3 = '\0';   // \0 --> Null character (aschii value-->0)
       // or

    cout<<ptr1<<endl; // 0 (reserved address)
    cout<<ptr2<<endl; // 0
    cout<<ptr3<<endl; // 0
    return 0;
}