#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// Q() sort a string in deacreasing order of values assciated after removal of values smaller than x

int main(){
    string s = "AZYXBDXJKH";

    string str;
    for(int i=0;i<s.length();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }

    // it csan be done use bubble sort 
    sort(str.begin(),str.end());
    reverse(str.begin(),str.end());
    cout<<str;
}