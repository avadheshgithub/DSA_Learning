#include<iostream>
using namespace std;

// double pointer --> it store the addres of pointer
// int** p = &ptr <------Double Pointer

int main (){
    int x=5;
    int* ptr = &x;
    cout<<"the address of x: "<<ptr<<endl; //0x61ff08

    int** P = &ptr;
    cout<<"the addres of pointer itself: "<<P<<endl; //0x61ff04

    cout<<*ptr<<endl; // 5
    cout<<**P<<endl;  // 5 

    cout<<&x<<endl; // pointer of x     0x61ff08
    cout<<ptr<<endl; // pointer of x    0x61ff08
    cout<<*P<<endl;  // pointer of x;   0x61ff08

    int*** q = &P; // storing the add of double pointer
    cout<<x<<endl;    // 5
    cout<<**P<<endl;  // 5
    cout<<*ptr<<endl; // 5
    cout<<***q<<endl; // 5
    
    return 0;
}