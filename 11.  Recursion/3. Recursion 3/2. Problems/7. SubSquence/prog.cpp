/*
     ## print all increasing Sub -Sequence of length K from first n natural numbers

            arr = 1 2 3

        1. subSquence - take it or leave it but in increasing order {123,125,378}

        2. subset - dont repeate & order does't matter {1,2,3,12,13,23,123}

        3. subArray - continious part of array {12,123,1}
*/

#include<iostream>
#include<vector>
using namespace std;

void printSubset(int arr[],int n,int idx,vector<int>ans,int k){ 
    if(idx==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(ans.size()+(n-idx)<k) return; // not possible to form subsquence
    printSubset(arr,n,idx+1,ans,k);
    ans.push_back(arr[idx]);
    printSubset(arr,n,idx+1,ans,k);
    
}


int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    vector<int>v;
    int k=3;
    printSubset(arr,n,0,v,k);

}
