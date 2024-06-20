#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4};
    int* ptr = arr;
    cout<<ptr<<endl; // 0x61fef4

    ptr[0] = 9;
    for(int i=0;i<4;i++){
        cout<<ptr[i]<<" "; // 9 2 3 4
        // cout<<i[ptr]<<" ";  this is valid
    }
    cout<<endl;

    *ptr = 8; // ptr[0] = 8;

    for(int i=0;i<4;i++){
        cout<<ptr[i]<<" "; // 8 2 3 4
        // cout<<*ptr<<" ";
        ptr++; // Incremented bye 4 byte
    }
    ptr = arr; // ptr is poiting to first element
    ptr++ ; // ptr is poiting to secoend element
    ptr--; // ptr is pointing to the again first element



    return 0;
}