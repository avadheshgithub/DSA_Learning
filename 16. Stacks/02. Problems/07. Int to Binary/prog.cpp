/*
    ## Integer to Binary --
*/

#include<iostream>
#include<stack>
using namespace std;

void Binary(int n){
    stack<int>s;
    while(n>0){
        s.push(n%2);
        n = n/2;
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main(){
    Binary(191);
}