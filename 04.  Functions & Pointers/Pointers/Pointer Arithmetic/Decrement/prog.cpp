#include <iostream>
using namespace std;

// pointer decrement

int main()
{
    int x = 7;
    int *ptr = &x;
    cout << ptr << endl; // 0x61ff08|--------------------------------------------------
    ptr--;               //                 |   int type --> add would be decrement by 4 byte
    cout << ptr << endl; // 0x61ff0c|--------------------------------------------------
    return 0;
}