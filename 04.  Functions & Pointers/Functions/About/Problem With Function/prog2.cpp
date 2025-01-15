
// swap two numbers (using function)
/*
  it is not possible to swap with the help of funcion be the value of main function of a,b only go(take refrence) into made by my function swap . at there it will be swapped but when this function will try return, it will not be returned and the value of A AND B woulde be same as main function value.

Problem:-pass by value, but not pass by refrence.it can be done by sending its address itself

solution :- pass by refrence (Pointer)
*/

#include <iostream>
using namespace std;
int main()
{

  // swap two numbers (using third variable)
  int a, b;
  cout << "enter the value of a: ";
  cin >> a;
  cout << "enter the value of b: ";
  cin >> b;
  int temp = a;
  a = b;
  b = temp;
  cout << "After swapping the values of a: " << a << "\n"
       << "After swapping the values of b: " << b << endl;

  // swap two numbers (without using third variable)
  int a, b;
  cout << "enter the value of a: ";
  cin >> a;
  cout << "enter the value of b: ";
  cin >> b;
  a = a + b;
  b = a - b;
  a = a - b;
  cout << "After swapping the values of a: " << a << "\n"
       << "After swapping the values of b: " << b << endl;

  return 0;
}