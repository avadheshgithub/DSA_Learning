#include<iostream>
#include<string>
using namespace std;

// in C++ - Strings are mutable
// in java - strings are immutable

int main(){

    string str = "raghav";
    cout<<str<<endl;  // raghav
    str[1] = 'o'; 

    
    // Q(1) all the even index , change with a char
    int i =0;
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0) str[i] = 'a';
    }
    cout<<str<<endl; // roghav

    return 0;

}