/*

## Heirachical Inheritance :-
    one parent class--------------------------> mutile derived class
    
    -------------------
       class  Vehicle
    --------------------
    |                  |
    |                  |
    Class bike         Class Car

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
        cout<<"Grand Parent class constructor is called"<<endl;
    }

};

class car: public vehicle {  
public:
    int stearingSize;
    car(){
        cout<<"Parent class constructor is called"<<endl;
    }
};

class bike : public vehicle{  
public:
    int handleSize;
    bike(){
        cout<<"child class constructor is called"<<endl;
    }
};

int main(){
    bike honda;  
    car bmw;     
}