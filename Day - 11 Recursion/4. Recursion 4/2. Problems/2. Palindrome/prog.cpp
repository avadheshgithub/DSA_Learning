/*
        # palindrom using recursion

        if a numbber or string is equal to its reverse of  ==> palindrome
*/

#include<iostream>
using namespace std;

bool isPalindrome1(string s){ // iterative solution
    int i=0;
    int j = s.length()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}

bool isPalindrome2(string s,int i,int j){ // recursion solution
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else return isPalindrome2(s,i+1,j-1);
}
int main(){
    string str = "avadhesh";
    cout<<isPalindrome2(str,0,str.length()-1);
}