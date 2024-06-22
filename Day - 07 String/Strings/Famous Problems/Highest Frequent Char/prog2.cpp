#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    //methode 02
    string str = "avadheh";
    int max = 0;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        int count =1;
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]) count++;
        }
        if(max<count) max = count; //6
    }
    cout<<max;

    for(int i=0;i<str.length();i++){
        char ch = str[i];
        int count =1;
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]) count++;
        }
        if(max==count) cout<<endl<<ch<<" has highest frequency is: "<<max;
    }

}