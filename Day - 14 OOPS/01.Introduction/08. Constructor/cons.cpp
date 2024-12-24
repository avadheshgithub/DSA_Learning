/*

## Constructor :- hidden function that allocated memory and object initilize
                - used to  create object
                - constructor is called when any object is created.
                - By Defualt its present ;
                - very very similar to function;
                - its  reutrn classtype types;
                - it has no name;
                - within the class it would be
                - Same name as class

        1. Default Constructor - no parameter

        2. parameterized COnstructor - parameter Available

        3. Copy Constructor - 
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

    // Copy Constructor --- Call by Reference (Always)
    bike( bike &b){
        cout<<"Copy Constuctor is called"<<endl;
    }

};

int main(){
    bike tvs;  // object Creation
    bike honda(500); //

    bike b2 = b1;  //Copy Constructor
    bike b2 (b1)  // Copy Constructor
}