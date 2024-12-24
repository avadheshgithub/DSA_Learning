/*

## Diamond Problem :-
        When 2 inctance of base classed are present in the derived class. 

        - B derive Class A , C drive CLass A &       D derive B+C
        - Now D has 2 instance of Class A


        - Solution - Veritual Keyword
*/

#include<iostream>
using namespace std;

class A{
public:
    A(){
        cout<<"A class Contructor is Called"<<endl;
    }
};


class B : public A{
public:
    B(){
        cout<<"B class Consturtor is called"<<endl;
    }
};


class C : public A {
public:
    C(){
        cout<<"C class contructor is called"<<endl;
    }
};


class D : public B, public C{
public:
    D(){
        cout<<"D class Consturctor is Called"<<endl;
    }
};

int main(){
    D obj;
}

/*
    ## OUtput\

    -A class Contructor is Called
    B class Consturtor is called
    A class Contructor is Called
    C class contructor is called
    D class Consturctor is Called

    A Class Repeated 2 times ---> Diamond PRoblem

    Solution - Virtual Keyword (once A class came - AGain it wouldn't be come)

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

/*

Output :-

        A class Constructor is Called
        B class Constructor is Called
        C class Constructor is Called
        D class Constructor is Called

*/