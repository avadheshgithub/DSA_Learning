#include <iostream>
using namespace std;
int main()
{

    // Solution 01
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int a = 1, b = 1, sum = 0;
    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    cout << b;

    // Solution 02
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int a = 0;
    int b = 1;
    int sum = 0;
    while (a < n)
    {
        cout << sum;
        a = b;
        b = sum;
        sum = a + b;
    }

    return 0;
}