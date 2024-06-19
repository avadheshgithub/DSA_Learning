#include<iostream>
using namespace std;
int a = 9; // Global variable

void fun(int x, float y){  // Formal parameter
    cout<<"the address of fun x : "<<&x<<endl;
    cout<<"the address of fun y : "<<&y<<endl;
}

void f(int x=2,int y=5){ 
    cout<<a;              
        
}       
 // Default  value :-  2 is default value of x  &   5 is  default value of y 
//  but when I called this function in main then value of x& y is : 1 & 2

int main(){
    int x;
    int y;
    //  adress of main x
    cout<<"the address of main x : "<<&x<<endl;
    cout<<"the address of main y : "<<&y<<endl;
    
    //  adress of fun x
    fun(7,8.0);  // Actual Parameter

    int a; // Local Varible

    f(1,2);

    return 0;
}