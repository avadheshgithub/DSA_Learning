/*
    ## Operator Overloading - same operator but different operations 
        - It would be called based on the given input for that function.

        Syntax - <return-type> operator <operator>() {
            // function body
        }

    # Disadvantage - these operators cannot be overloaded:
        .  (dot operator)
        :: (scope resolution)
        sizeof (operator)
*/

#include <iostream>
using namespace std;

class complexNumber {
public:
    int imaginary;
    int real;

    complexNumber operator+(complexNumber &c1) { // + Operator Overloaded
        complexNumber c3;
        c3.imaginary = c1.imaginary + this->imaginary;
        c3.real = c1.real + this->real;
        return c3;
    }

    complexNumber operator-(complexNumber &c1) { // - Operator Overloaded
        complexNumber c3;
        c3.imaginary = c1.imaginary - this->imaginary;
        c3.real = c1.real - this->real;
        return c3;
    }
};

int main() {
    complexNumber a1, a2;

    a1.imaginary = 10;
    a1.real = 5;

    a2.imaginary = 2;
    a2.real = 3;

    complexNumber a3 = a1 + a2;
    complexNumber a4 = a1 - a2;

    cout << "Real: " << a3.real << " Imaginary: " << a3.imaginary << endl;
    cout << "Real: " << a4.real << " Imaginary: " << a4.imaginary << endl;

    return 0;
}
