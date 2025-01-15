/*

## Single Inheritance - inherit the charactristic frm the parents


    ## - derived class/ Child Class
        - inherit the properties of their only parent class; 

*/

#include<iostream>
using namespace std;

class vehicle{
public:
    int tyresize;
    int engineSize;
    int light;
    string companyName;

    vehicle(){
        cout<<"Parent class constructor is called"<<endl;
    }

};

class bike : public vehicle{  // Single Inheritance
public:
    int handleSize;
    bike(){
        cout<<"child class constructor is called"<<endl;
    }
};

int main(){
    bike honda;  // First - Parent class     // 2nd - Child class
}



/* if all the functionalties of parent class can acessed by the child class then it is a kind of security britch


class A{

Private:        // can't be accessed, can't be inheritated
    int a;
protected:      // can't be Accesed , can be inherited
    int b;
public:        // can be accesed , can be inherited
    int c;

}


Class A : public Class B {    // 

}

Class A : Protected Class B {

}

Class A : Private Class B {

}


#
 -------> Access modifier used (Low   ----->  High Security Always)

    1. Publicly inherite (Least Secure)
        - Public -----------> public
        - protected --------> Protected
        - Private ----------> can't be accesed

    2. Proctected Inheriit (medium Secure)
        - Public -----------> protected
        - protected --------> Private
        - Private ----------> Can't be access

    3. Private Inheite (mosy secure)
        - Public -----------> private
        - protected --------> Private
        - Private ----------> Can't be access
*/