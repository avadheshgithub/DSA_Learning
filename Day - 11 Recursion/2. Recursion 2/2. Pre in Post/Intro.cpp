/*
    ## Pre in post   

            kaam  ---> pre
            call-1
            kaam  ---> in
            call-2
            kaam  ---> post

        ## Output

            Pre 2
            Pre 1
            In 1
            Post 1
            In 2
            Pre 1
            In 1
            Post 1
            Post 2

    ## Call stack
            
*/

#include<iostream>
using namespace std;

void pip(int n){
    if(n==0) return;
    cout<<"Pre "<<n<<endl;
    pip(n-1);
    cout<<"In "<<n<<endl;
    pip(n-1);
    cout<<"Post "<<n<<endl;
}

int main(){
    pip(2);
}