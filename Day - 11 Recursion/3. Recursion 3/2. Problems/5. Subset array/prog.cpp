/*
        ## SUbset Array  

            f(" "/idx) 

            left side = pick index
            right side = not pick index

--------------------------------------------------------------------------------
                                    " " / "0"

                  "1"/"1"                                 ""/"1"
  
        "12"/"2"           "1"/"2"              "2"/"2"              ""/"2"
        /   \              /   \                /    \               /    \
"123"/"3"  "12"/"3"   "13"/"3"  "1"/"3"  "23"/"3"   "2"/"3"    "3"/"3"   ""/"3"
    
----------------------------------------------------------------------------------
*/

#include<iostream>
#include<vector>
using namespace std;

void printSubset(int arr[],int n,int idx,vector<int>ans){ 
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    printSubset(arr,n,idx+1,ans); // left side --> pick
    ans.push_back(arr[idx]);
    printSubset(arr,n,idx+1,ans); // right side --> not pick
    
}


int main(){
    int arr[] = {1,2,3};
    int n = 3;
    vector<int>v;
    printSubset(arr,n,0,v);

}
