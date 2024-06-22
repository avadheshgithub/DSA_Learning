#include<iostream>
#include<string>
using namespace std;



int main(){
    int x = 12345;
    string s = to_string(x);
    cout<<"num of digits in number: "<<s.length()<<endl;

    return 0;
}