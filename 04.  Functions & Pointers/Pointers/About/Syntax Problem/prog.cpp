#include<iostream>
using namespace std;
// syntac problem in pointer
/*
    int* p1 = &x;
                      --> int* p1 = &x , p2 = &x      (not valid)
    int* p2 = &y;

*/

int main(){
    int x = 12, y = 10;
    // int*p1 = &x,p2 = &y;  //Error
    int*p1 = &x,p2 = y;     // this is not giving any error 
    return 0;
}