/*

## MEthode/ FUnction OverRiding - When a functionof base class is redefined int it's derived class
                                  it's called function overiding
                                - inheriting requered for this.
                                - Both function and its return type should be same 
                                - have child and parent class
    ## Aplication-
        - to overide/ to overControl his own


    # Acessing through Scope Resolution Operator .
    # Acessing through Pointer.
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