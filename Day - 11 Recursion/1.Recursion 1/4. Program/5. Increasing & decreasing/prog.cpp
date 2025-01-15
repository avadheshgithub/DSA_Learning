/*
    ## Print increasing decreasing sequence 

        int n = 4
        output = 1 2 3 4 3 2 1
*/

#include<iostream>
using namespace std;

void print(int x,int n){
    if(x>=n){
        cout<<n<<" ";
        return ;
    } 
    cout<<x<<" "; // n to 1
    print(x+1,n);
    cout<<x<<" "; // 1 to n
}
int main(){
    print(1,4);
}