#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// Q(1) - input a stigng of even length and reverse the first half of the string

int main(){

    string s;
    getline(cin,s);

    // reverse first half
    int n = s.length();
    reverse(s.begin(),s.begin()+n/2);//till where have to reverse +1 & begin()- start from 1
    cout<<s<<endl;

    // 2-5 reverse
    reverse(s.begin()+1,s.end()+5);

   return 0;
}