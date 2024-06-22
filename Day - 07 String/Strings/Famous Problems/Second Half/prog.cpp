#include<iostream>
#include<string>
using namespace std;



int main(){

    string str;
    cout<<"enter string : ";
    getline(cin,str);

    // revserse second half (using in-bulit - substring)
    int n = str.length();
    cout<<str.substr(n/2);
    return 0;
}