/*
        ## given an integer array where every eleemnt occurs twice except one occurs only once. find that uniqeu element

        arr = {2,1,3,2,1,5,5,6,3}

        logic -> XOR

            same value ^ same value = 0
            0 ^ value = value

        NOTE- XOR follow commutative propery
            mean in any orders if more than two numbers are value will be same


*/

#include<iostream>
using namespace std;

int main(){
    int arr[] = {4,4,1,3,2,3,5,1,2};
    int n = 9;
    int res=0;
    for(int i=0;i<n;i++){
        res = res^arr[i];
    }
    cout<<res<<endl;
}