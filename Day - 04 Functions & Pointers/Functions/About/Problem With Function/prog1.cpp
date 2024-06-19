#include <iostream>
using namespace std;

/*
    Problem :- Swapping is not happening , its because of pass by argument.
    solution :- pass by reference (using pointers)

*/
int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    return 0;
}

int main()
{
    int a, b;
    cout << "Enter the value of a : ";
    cin >> a;

    cout << "Enter the value of b : ";
    cin >> b;

    swap(a, b);

    cout << a << " " << b;
}