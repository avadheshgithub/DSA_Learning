/*


## Multi-Level Inheritance -  

        A   GrandParetn
        |
        |
        B   Paremt
        |
        |
        C   Child

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

class car : public vehicle {  
public:
    int stearingSize;
    car(){
        cout<<"Parent class constructor is called"<<endl;
    }
};

class bike : public car{  
public:
    int handleSize;
    bike(){
        cout<<"child class constructor is called"<<endl;
    }
};

int main(){
    bike honda;  
    
    // Copnstuctor Mechanism called 
    // 1st - GrandParent class     // 2nd - Parent class     // 3rd - Child class
}