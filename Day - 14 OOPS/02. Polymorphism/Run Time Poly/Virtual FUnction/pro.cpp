/*

    ## VIrtual Function :-
    
    - virtual functions make sure the correct function is called for an onject, regardless of the pointer used for calling it

*/

#include<iostream>
using namespace std;

class vehicle{
public:
    virtual void show(){
        cout<<"vehivle--> Class vehicle"<<endl;
    }
};

class Bike : public vehicle{
public:
    void show(){                     // Overidding
        cout<<"bike--> Class Bike"<<endl;
    }
};

int main(){

    Bike b;
    b.show();

    // How We can acces Class A Show()
    b.vehicle ::show();                       /// Scope Resolution

    vehicle *a;
    a = &b;
    a->show();

}