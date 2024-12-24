/*

## Function overloading :- creating functions with same name but different parameter.

    #   - same function name but parameter should diff
        - num of parameter change
        - type of paramter should be change

*/

#include<iostream>
using namespace std;

class addition{
public:
    
    void add(int a,double b){       // Same Function
        cout<<a+b<<" :Sum "<<endl;
    }                                                    //====== Function Overloading

    void add(int a,int b){         // same  function
        cout<<"Sum :"<<a+b<<endl;
    }
};

int main(){
    addition sum;
    sum.add(10,20);
    sum.add(10,20.0);
}

