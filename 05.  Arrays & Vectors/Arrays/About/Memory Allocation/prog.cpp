#include <iostream>
using namespace std;

int main()
{

    // each element take 4 byte memory in a conjicative (continuous) manner

    int arr[5];

    // add of arr
    cout<<&arr<<endl;  // note- add of array & add of first element same
    cout<<arr<<endl;  // same as add of arr
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;

    // Outputs

    // 0x61fefc
    // 0x61ff00
    // 0x61ff04
    // 0x61ff08
    // 0x61ff0c

    return 0;
}