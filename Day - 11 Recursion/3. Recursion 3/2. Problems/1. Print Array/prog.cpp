/*
        ## Print all the element of an array    
*/

#include<iostream>
#include<vector>
using namespace std;

void display(int arr[],int n,int i){
    if(i==n) return;
    cout<<arr[i]<<" ";
    display(arr,n,i+1);
}

void display2(vector<int>& ans,int idx){
    if(idx==ans.size()) return;
    cout<<ans[idx]<<" ";
    display2(ans,idx+1);
}

int main(){
    int arr[] = {2,1,6,3,9,0,2,7};
    int n = 8;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    for(int ele:arr) cout<<ele<<" ";
    cout<<endl;

    vector<int>ans = {1,9,2,8,3,7,4,6,5};

    display(arr,n,0);
    cout<<endl;

    display2(ans,0);
}