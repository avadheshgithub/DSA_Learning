/*
    ## caulcate the factorial using recusrsion

        1 to n --> all number multiply
*/
#include<iostream>
using namespace std;

int fact1(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f*=i;
    }
    return f;
}

void factUpTo(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f*=i;
        cout<<i<<"! = "<<f<<" "<<endl; // factorial property
    }
}

int factRec(int n){
    if(n==1 || n==0) return 1 ; // Base case
    return n * factRec(n-1);

}

int main(){
    cout<<fact1(5)<<endl;
    factUpTo(5);
    cout<<factRec(5)<<endl;
}