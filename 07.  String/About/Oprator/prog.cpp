#include<iostream>
#include<string>
using namespace std;


int main(){

    // 1. Concatanation (append) - only string & char are allowed
    string s = "avadh";
    string t = "esh";
    s = s+t;
    t = "avadh" + t;
    cout<<s<<endl; // avadhesh
    cout<<t<<endl; // avadhesh


    return 0;
}