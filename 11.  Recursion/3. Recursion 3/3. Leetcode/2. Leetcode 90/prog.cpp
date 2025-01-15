/*
    ## print and store subsets of Array containing duplicates char  [Leetcode 90]

    ----> TC && SC = O(2^n)


     --> f(idx,arr)      
    left side - pick
    right side - not pick   

    --------------------------------------------------------------------------
                                f(0,arr)
                            /              \ 
                     f(1,1)                 f(1,"")
                 /         \                /        \
             f(2,12)       f(2,1)        f(2,2)       f(2,"")
            /   \           /   \          /   \        /     \
    f(3,123)  f(3,12) f(3,13)  f(3,1)  f(3,23) f(3,2)  f(3,3)  f(3,"")

    ----------------------------------------------------------------------------
*/


//------------------------------LEETCODE SOLUTION 01------------------------------
/*class Solution {
public:
    void helper(vector<int>& a, int idx, vector<int>& temp,vector<vector<int>>& ans) {
        ans.push_back(temp); // Add the current subset to the result

        for(int i=idx;i<a.size();i++){ // pick ele & avoid duplicate
            if(i!=idx && a[i]==a[i-1]) continue;
            temp.push_back(a[i]);
            helper(a, i+1,temp,ans);
            temp.pop_back(); // Backtrack
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(a.begin(), a.end()); // Sort the array to handle duplicates
        helper(a, 0, temp,ans);
        return ans;
    }
};
*/



//------------------------------LEETCODE SOLUTION 02------------------------------
/*class Solution {
public:
    void helper(vector<int>& a, int idx, vector<vector<int>>& v, vector<int>& temp, bool canPick) {
        if (idx == a.size()) {
            v.push_back(temp); // Add the current subset to the result
            return;
        }
        
        // Skip the current element
        helper(a, idx + 1, v, temp, false);
        
        // Include the current element, only if it’s not a duplicate or the previous element was picked
        if (idx == 0 || a[idx] != a[idx - 1] || canPick) {
            temp.push_back(a[idx]);
            helper(a, idx + 1, v, temp, true);
            temp.pop_back(); // Backtrack
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& a) {
        vector<vector<int>> v;
        vector<int> temp;
        sort(a.begin(), a.end()); // Sort the array to handle duplicates
        helper(a, 0, v, temp, true);
        return v;
    }
};
*/


#include<iostream>
#include<vector>
using namespace std;

void printSubset(int arr[],int n,int idx,vector<int>ans){   // it give duplicate
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