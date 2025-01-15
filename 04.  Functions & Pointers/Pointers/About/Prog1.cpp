#include <iostream>
using namespace std;

// Pointer - a way to store addresses
// data_type * pointer_name;  <--- Syntaxt

int main()
{

    // (1)  int* -- data type
            int x = 5;
            int *p = &x; // the address of x  --> stored in P (variable) pointer

            // int *p = &x; --> can be written;

            cout << &x << endl; // add of x -->  0x61ff08
            cout << p << endl;  // P pointer also contain the add of x --> 0x61ff08


    // (2) char* -- data type
            float a = 6.5;
            float *P1 = &a;
            cout << &a << endl; // 0x61ff08
            cout << P1 << endl; // 0x61ff08


    // (3) bool* -- data type
            bool flag = true;
            bool *P3 = &flag;      // 0x61ff0b
            cout << &flag << endl; // 0x61ff0b
            cout << P3 << endl;

    return 0;
}