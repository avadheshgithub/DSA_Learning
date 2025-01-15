/*
    ## Print Zig-Zag

        input       output
        1            111
        2            211121112
        3            32111211123111211123
        4            4321112111232111211121112343211121112321112111234

*/

#include<iostream>
using namespace std;

void ZigZag(int n){
    if(n==0) return;
    cout<<n;
    ZigZag(n-1);
    cout<<n;
    ZigZag(n-1);
    cout<<n;
}

int main(){
    ZigZag(2);
}