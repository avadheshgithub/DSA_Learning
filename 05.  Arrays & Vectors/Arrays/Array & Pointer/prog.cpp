#include<iostream>
using namespace std;

int main(){

    // case 01 :- array & Pointer 

    int arr [] = {1,2,3,4,5};
    int* ptr  = arr;  // add of array
    int* ptr = &arr[0];
    // int* ptr = &arr   // will through an array



// ---------------------------------------------------------


    // case 02 :- int & Pointer
    
    int x = 4;
    int* ptr = &x;      // add of x
    // int* ptr = x;   // will throw an error


    return 0;
}