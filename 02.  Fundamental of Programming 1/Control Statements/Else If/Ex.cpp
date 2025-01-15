#include<iostream>
using namespace std;

int main(){

    // If else

    int x;
    cout<<"Enter the value of x: ";
    cin>>x;

    if(x>=90){
        cout<<"Excellent";
    }
    else if(x>=80){
        cout<<"Good";
    }
    else if(x>=70){
        cout<<"Average";
    }
    else if (x>=60){
        cout<<"poor";
    }
    else{
        cout<<"fail";
    }

    return 0;
}