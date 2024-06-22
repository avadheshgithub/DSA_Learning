#include<iostream>
#include<string>
using namespace std;

// String - As a data type

int main(){

    // string str = "avadhesh shah";
    // cout<<str[0]<<endl;
    // cout<<str<<endl;



    // string s;
    // cout<<"Enter your string: ";
    // cin>>s; // it work if the given string has no space. -- if there are space - end
    // cout<<s; 

    string st;
    cout<<"Enter your string: "; // it will work on full string even any num of words
    getline(cin,st);
    cout<<st<<endl;
    

    // indexing 
    cout<<st[0];

}
