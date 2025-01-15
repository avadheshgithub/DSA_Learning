/*
 ## Virtual KEyword - once it is used -- only single instance of Class A is created
    
    # - Also called - Virtual Inheritance
     - Solution of diamond problem

*/


#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "A class Constructor is Called" << endl;
    }
};

class B : virtual public A {  // Virtual inheritance
public:
    B() {
        cout << "B class Constructor is Called" << endl;
    }
};

class C : virtual public A {  // Virtual inheritance
public:
    C() {
        cout << "C class Constructor is Called" << endl;
    }
};

class D : public B, public C {
public:
    D() {
        cout << "D class Constructor is Called" << endl;
    }
};

int main() {
    D obj;  // Create an object of class D
    return 0;
}
