/*

Q() Sqrt of a number

*/

#include<iostream>
using namespace std;

int main(){
    int x = 20;

    int low = 0;
    int high = x;
    bool flag = true;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(mid*mid==x){
            flag = false;
            cout<<mid;
            break;
        }
        else if(mid*mid>x) high = mid-1;
        else low = mid+1; // if(mid*mid<x) low = mid+1;
    }
    if(flag==true) cout<<high; // sqrt of given num
}