#include <iostream>
using namespace std;

/* why pointer --> due to pass by value but not pass by refrence problem

Problem :-  passing value , not refrence function is not able to swap because of its pass by value,but not pass by refrence(Address) problem

*/

void swap(int a, int b) // will not be swapped
{
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main()
{
    int a, b;
    cin >> a >> b;

    swap(a, b);
    cout << a << " " << b;
    return 0;
}