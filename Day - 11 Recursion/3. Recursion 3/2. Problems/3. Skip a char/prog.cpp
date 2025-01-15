#include<iostream>
#include<string>
using namespace std;


void removeChar(string ans, string origional){ // space complexity bad
    if(origional.length()==0){
        cout<<ans;
        return;
    }
    char ch = origional[0];
    if(ch=='a') removeChar(ans,origional.substr(1)); // substr skip 1 element 
    else removeChar(ans+ch,origional.substr(1));
}

void removeChar2(string ans, string origional,int idx){ // space improved than prev
    if(idx==origional.length()){
        cout<<ans;
        return;
    }
    char ch = origional[idx];
    if(ch=='a') removeChar2(ans,origional,idx+1); // substr skip 1 element 
    else removeChar2(ans+ch,origional,idx+1);
}
int main(){
    string str = "Raghav garg";
    string s = "";
    for(int i=0;i<str.length();i++){
        if(str[i]!='a') s+=str[i];
    }
    cout<<s<<endl;

    removeChar2("",str,0);
}