#include<iostream>
#include<string>
using namespace std;

// input a string and return a nmber if times the neighbouring charater are different from each other

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int n = s.length();
    int count =0;
    for(int i=0;i<n;i++){
        // n=1
        if(n==1){
            count=0;
            break;
        }
        //n=2
        if(n==2 && s[0] != s[1]) count++;

        //General logic 
        if(i==0){
            if(s[i] != s[i+1]) count++;
        }
        else if(i==n-1){
            if(s[i] != s[i-1]) count++;
        }
        else if(s[i] !=s[i-1] && s[i] != s[i+1]) count++;
    }
    cout<<count;
}