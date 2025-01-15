#include<iostream>
using namespace std;

// pointer increment

int main(){
    int x= 7;
    int* ptr = &x;
    cout<<ptr<<endl; // 0x61ff08|--------------------------------------------------
    ptr++;   //                 |   int type --> add would be increment by 4 byte
    cout<<ptr<<endl; // 0x61ff0c|--------------------------------------------------
    
    bool flag = true;
    bool* ptr = &flag;
    cout<<ptr<<endl;  //0x61ff0  |---------------------------------------------------
    ptr = ptr + 1;   //          |  // bool type --> add would be increment by 1 byte
    cout<<ptr<<endl; // 0x61ff0c-|---------------------------------------------------


    int x = 4;
    int* ptr = &x; //(let add.- a600)
    cout<<*ptr<<endl; //4
    ptr = ptr + 1; // (not add-->a604)
    cout<<*ptr<<endl; //6422284 (why ?) --> at add a604 , not found any value , so garbage value
    

    int x = 4;
    int* ptr = &x;
    cout<<*ptr<<endl; //4
    (*ptr)++; // 4+1 
    cout<<*ptr<<endl; //5

    return 0;
}