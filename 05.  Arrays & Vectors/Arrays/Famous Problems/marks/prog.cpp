#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter number of students : ";
    cin>>n;


    int marks[n];
    cout<<"enter the marks :";

    //input
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }

    // Students who got less than 60, printing index
    for(int i=0;i<n;i++){
        if(marks[i]<60) cout<<i<<" ";
    }
    return 0;
}