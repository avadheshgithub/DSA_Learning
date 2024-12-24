/*

    ## Friend FUnction - it is friend of the private . with the help of this , we can access private 

        # - ITS  declaration do in the base class (Public Mode)
            - Defination outside of the class

*/

#include<iostream>
using namespace std;

class A{
private:
    int a_private = 10;
public:
    friend void show(A &a){}; // Friend FUnction -----> Declaration
};


void show(A &a){             // Friend FUnction ----> Defination
    cout<<a.a_private<<endl;
};

int main(){
    A a;
    show(a);
}