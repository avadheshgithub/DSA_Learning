/*

    ## Pure Virtual Function : 
        - it does'nt Exist but its all properties will be in all its child class. it is a kind of interface which obj can't be created because it is vritual. it doesn't exiest

        - its object is not possible

        - all its properties vould be in all its child class.

        - any virtual function declaration in the basae class but defination in the child class;

        - all functions that are in pure virtual function , it should be override in its child class.abort

        - if minimum one pure virtual function are there and rest of the could be simple.

*/


#include<iostream>
using namespace std;


class vehicle{
public:
    int tyresize;
    int engineSize;


    void show(){                                           // non - Virtual FUnction
        cout<<"this is not the virutal function"<<endl;
    }

    virtual void calculateMileage()= 0;  // Pure virtual function 
    virtual void refuel() = 0;          // Pure Virtual Function
};


class bike:public vehicle{     // Inheritance
public:
    void calculateMileage(){  // @Overirde of virtual Function -----> Mandatory

    }

    void refuel(){    // @OverRide of virtual Function ---------> Mandatory

    }
};

int main(){
    bike b;
    b.calculateMileage();
}