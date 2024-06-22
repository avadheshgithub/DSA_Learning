#include<iostream>
#include<string>
using namespace std;


int main(){

    // input a string a length n and count all the vowel in the given string

    string str = "Avadhesh";
    int count = 0;
    int i=0;
    while(str[i] !='\0'){
        if(str[i] == 'a' || str[i]== 'e' ||str[i]== 'i' ||str[i]== 'o' ||str[i]== 'u' || str[i]== 'A' || str[i]=='E' ||str[i]== 'I' ||str[i]== 'O' ||str[i]== 'U'){
            count++;
        }
        i++;
    }
    cout<<count<<endl;
    return 0;
}