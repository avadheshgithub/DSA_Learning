/*

Hybrid Inheeritance - combination of two or more Inheritance 

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

class car: public vehicle {           // Signle Inheritance
public:
    int stearingSize;
    car(){
        cout<<"Parent class constructor is called"<<endl;
    }
};

class bike : public vehicle,public car{   // Multiple Inheritance
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