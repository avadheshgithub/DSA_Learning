#include<iostream>
using namespace std;

int main(){
    // 1st methode take input from the user using pointer

     int x,y;
     int* p1 = &x;
     int* p2 = &y;
     cout<<"enter first number: ";
     cin>>*p1;
     cout<<"enter second number: ";
     cin>>*p2;
    

    
    // 2nd way to take input from the user using pointer 

     int x;
     int* p = &x;
     cin>>*p;
     cout<<x;


    return 0;
 
}