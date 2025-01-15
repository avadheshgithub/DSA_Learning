/*
        ## make a function which calculate a raised to the power 'b' using recursion

        ---> a raised to power b
*/

#include<iostream>
using namespace std;

int powerRec(int a,int b){
    if(b==0) return 1;
    return a * powerRec(a,b-1);
}
int power(int a,int b){
    int p=1;
    for(int i=1;i<=b;i++){
        p*=a;
    }
    return p;
}
int main(){
    cout<<power(10,2);
    cout<<endl;
    cout<<powerRec(10,2);
}