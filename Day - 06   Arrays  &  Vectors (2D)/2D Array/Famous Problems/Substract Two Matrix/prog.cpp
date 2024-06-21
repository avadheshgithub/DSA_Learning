#include<iostream>
using namespace std;

int main(){

        //write a program to add two matrices 
    /*
        1. declrae third matrix and store all sum
        2. without delcare any matrix , print sum    ex.. cout<<a[i][j]+b[i][j];
        3.dont declare any third matrix, just store in b matrix like b[i][j]=b[i][j]+a[i][j];-print b matrix
        4.dont declare any third matrix, just store in a matrix like a[i][j]+=b[i][j];   -print a matrix

    */
    int a[2][3] = {1,2,3,4,5,6};
    int b[2][3] = {1,2,3,4,5,6};
    int res[2][3];

    // add both matrix
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            res[i][j] = a[i][j] - b[i][j];
        }
    }

    // print a matrix
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    
    // print b matrix
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // print res matrix
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}