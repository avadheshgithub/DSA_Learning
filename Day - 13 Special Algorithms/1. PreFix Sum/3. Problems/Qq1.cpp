/*
    ##  give the index from where its partition in 2 part and their sum are equal     
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {1,2,3,4,5,5,10};
    int n = arr.size();

    cout<<"Origional Arr : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    // Prefix sum
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }

    cout<<"Prefix sum : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    // check if any i exiest
    int idx=-1;
    for(int i=0;i<n;i++){
        if(2*arr[i]==arr[n-1]) {
            idx=i;
            break;
        }
    }
    if(idx!=-1) cout<<"yes it can be partioned after :"<<idx<<endl;
    else cout<<"can't be partioned"<<endl;

}