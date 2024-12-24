/*

## Destructor -

        - it is called when object goes out of scope.
        - memory Free via Distructor
        - Very Similar to constructor
        - dont have any return type
        - tild(~) symbol is used 

*/

#include<iostream>
using namespace std;

class bike{
public:
    int tyreSize;


    // Default COnstructor
    bike(){
        cout<<"Cosntructor is called"<<endl;
    }

    // ParaMEterized Constructor
    bike(int a,int b=100){
        int tyerSize = a;
        cout<<"Parameterize Constructor is called"<<endl;
    }

    // Destructor
    ~bike(){
        cout<<"Descrtucror is called"<<endl;
    }
};

int main(){
    bike tvs;  // object Creation
    bike honda(500); //
}