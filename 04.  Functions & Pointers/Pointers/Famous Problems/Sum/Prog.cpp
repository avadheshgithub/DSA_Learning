#include<iostream>
using namespace std;

int main(){
    // sum of two number using pointer

    // 1st methode
     int x;
     cout<<"enter the value of x: ";
     cin>>x;
     
     int y;
     cout<<"enter the value of y: ";
     cin>>y;
     int* p1 = &x;
     int* p2 = &y;
     cout<<"sum of both numbers: "<<*p1 + *p2;

    return 0;


    // 2nd methode

     int x,y;
     int* p1 = &x;
     int* p2 = &y;
     cout<<"enter first number: ";
     cin>>*p1;
     cout<<"enter second number: ";
     cin>>*p2;
     //cout<<"sum of both numbers: "<<*p1 + *p2;  //Executed
     cout<<"sum of both numbers: "<< x+ y;  //Executed

}