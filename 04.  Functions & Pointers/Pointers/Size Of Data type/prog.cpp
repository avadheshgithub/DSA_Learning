#include<iostream>
using namespace std;

// size of Datatype --> sizeof(int,bool,float,double)

int main(){ 
    
    // size of Datatype

    cout<<sizeof(int)<<endl;        //4 Byte -- 32 Bits  -- can store amount 2**32
    cout<<sizeof(char)<<endl;       // 1 Byte -- 8 Bits  -- can store amount 2**8
    cout<<sizeof(bool)<<endl;       // 1 Byte -- 8 Bits  -- can store amount 2**8
    cout<<sizeof(float)<<endl;      //4 Byte -- 32 Bits  -- can store amount 2**32
    cout<<sizeof(double)<<endl;     //8 Byte -- 64 Bits  -- can store amount 2**64
    cout<<sizeof(long long)<<endl;  //8 Byte -- 64 Bits  -- can store amount 2**64  
    return 0;
} 
