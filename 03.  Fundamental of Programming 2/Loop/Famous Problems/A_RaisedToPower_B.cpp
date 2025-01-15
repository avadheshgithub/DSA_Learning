#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter B: ";
    cin>>b;

    bool flag = true;
    if(b<0){
        flag = false;
        b = -b;
    }
    
    float power = 1;
    for(int i=0;i<b;i++){
        power *= a;
    }

    if(flag == false){
        power = 1/power;
        b = -b;
    }

    if(a==0 && b==0) cout<<"not defined";
    else  cout<<a<<" raised to power "<<b<<" is : "<<power; 

    return 0;
}