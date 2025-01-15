/*
        ## Tower of hanoi      [GFG]

        min num of moves = 2^n-1

        |       |      |
        |       |      |
        |       |      |
        |       |      |
        |       |      |
    ------------------------
        A       B      C
        sour    help   dest


        ## Steps (n=3)
            1 a->c
            2 a->b
            3 c->b
            4 a-> c
            5 b-> a
            6 b->c
            7 a-> c

        Soltuion -

            1. uper ke n-1 disk : source ---> help  (recursion)
            2. Biggest disk : sour ---> Dest (print)
            3. n-1 disks ko : help---> dest
        
*/

#include<iostream>
using namespace std;

void hanoi(int n, char a,char b,char c){
    if(n==0) return;
    hanoi(n-1,b,a,c); //  a--> source  b--> helper   c--> dest
    cout<<a<<"->"<<c<<endl;
    hanoi(n-1,b,a,c); //  b--> source  a--> helper   c--> dest
}
int main(){
    int n=3;
    hanoi(n,'A','B','C');
}