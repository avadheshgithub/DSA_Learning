/*
        # combination sum       [Leetcode 39]



        arr = {2,3,5}   target=8   - (each time three call and include 2,3,5)
----------------------------------------------------------------------------------

                                     {},{2,3,5}, 8(target)

        {2}{2,3,5},6            {3},{2,3,5},5            {5},{2,3,5},3

{2,2},4  {2,3},3  {2,5},1   {3,2},3  {3,3},2  {3,5},0   {5,2},1  {5,3},0  {5,5},-2

-----------------------------------------------------------------------------------

*/

#include<iostream>
#include<vector>
using namespace std;

void combination(vector<int> v, int arr[],int n,int target,int idx){ 
        if(target==0){
                for(int i=0;i<v.size();i++){
                        cout<<v[i]<<" ";
                }
                cout<<endl;
                return;
        }
        if(target<0) return;
        for(int i=idx;i<n;i++){
                v.push_back(arr[i]);
                combination(v,arr,n,target-arr[i],i);
                v.pop_back();
        }
}
int main(){
        int arr[] = {2,3,5};
        int n = sizeof(arr)/4;
        vector<int>v;
        int target = 8;
        combination(v,arr,n,8,0);
}


//----------------------------------LEETCODE SOLV-------------------------------

/*class Solution {
public:
    void combination(vector<vector<int>>& ans,vector<int> v,vector<int>& candidates,int target,int idx){ 
        if(target==0){
                ans.push_back(v);
                return;
        }
        if(target<0) return;
        for(int i=idx;i<candidates.size();i++){
                v.push_back(candidates[i]);
                combination(ans,v,candidates,target-candidates[i],i);
                v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        combination(ans,v,candidates,target,0);
        return ans;
    }
};*/