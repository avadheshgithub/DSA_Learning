#include<iostream>
#include<string>
using namespace std;

/* Strings - are a kind of character array
          - Mainly written in double quotes
          - null character exiest in string
          - char ch = '\0'; // special character (ASCII VAlue - 0) - used for terminate
*/

int main(){
    
    // Chracter Array 
    
    char str[5] = {'a','b','c','d','e'};   // true
    char str[5] = "abcd";                // true


    cout<<str[5];// Nothing printed because it is \0
    cout<<(int)str[5]; // 0 ASCHII Value - it means in last - there are \0 who terminate

    for(int i=0;str[i] != '\0';i++){
        cout<<str[i]<<" ";
    }

    cout<<str; // abcdef (it is string)

    char ch = 'ab';//this will throw error becuse it is character(should be in single quote)

    char ch = '\0'; // special character (ASCII VAlue - 0)
    char ch = '\n' ; // give new line
    char ch = '\t' ;// it give space


    return 0;
}