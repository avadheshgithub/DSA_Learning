/*


## Multiple Inheritance -  Multiple BAse class --------> Single child

        A  GrandParetn   B Parent
        |                   |
        |                   |
        |   C   Child       |

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

class car {  
public:
    int stearingSize;
    car(){
        cout<<"Parent class constructor is called"<<endl;
    }
};

class bike : public vehicle, public car{          /// mUtiple Inheritance
public:
    int handleSize;
    bike(){
        cout<<"child class constructor is called"<<endl;
    }
};

int main(){
    bike honda;  // First - GrandParent class     // 2nd - Parent class     // 3rd - Child class
}