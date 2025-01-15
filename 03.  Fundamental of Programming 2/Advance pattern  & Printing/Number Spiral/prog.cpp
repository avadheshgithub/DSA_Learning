#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Number of Rows: ";
    cin>>n;

    //solution part 01


    // 1 1 1 1
    // 1 2 2 2
    // 1 2 3 3
    // 1 2 3 4
    // min(i,j)

    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){

            int a = i;
            int b = j;
            if(a>n) a = 2*n-i;
            if(b>n) b = 2*n-j;
            cout<<min(i,j)<<" ";

        }
        cout<<endl;
    }
    return 0;
}