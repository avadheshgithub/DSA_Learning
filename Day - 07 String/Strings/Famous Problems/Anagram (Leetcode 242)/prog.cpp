#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    
    // anagram--> if two string are given--> choose anyone of them and rearrange/jumble--> if after rearranging comes second string then  both are anagram to each other

    // hint--> sort both and then compare if same then anagram

    string s = "avadhesh";
    string t = "sehdavha";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    cout<<s;
    cout<<endl<<t<<endl;
    
    if(s==t){
        cout<<"Given both strings are anagram";
    }
}