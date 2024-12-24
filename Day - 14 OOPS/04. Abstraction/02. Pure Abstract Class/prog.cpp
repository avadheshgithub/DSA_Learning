/*

    ## Pure ABstract Classs- All functions should be virtual

        - Non virtual function are not allowed in this while in anstract class it is possible

*/


#include<iostream>
using namespace std;


class vehicle{
public:
    int tyresize;
    int engineSize;


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