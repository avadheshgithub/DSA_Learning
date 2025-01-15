/*
        ## Print subsets of s string with unique character    [Leetcode 78]

        Follow up -- do it for array as well

            f(" "/idx) 

            left side = pick index
            right side = not pick index
        --------------------------------------------------------------------------
                                    " " / "0"

                  "1"/"1"                                 ""/"1"
  
        "12"/"2"           "1"/"2"              "2"/"2"              ""/"2"
        /   \              /   \                /    \               /    \
"123"/"3"  "12"/"3"   "13"/"3"  "1"/"3"  "23"/"3"   "2"/"3"    "3"/"3"   ""/"3"
    
----------------------------------------------------------------------------------
*/

/*class Solution {
public:

    void helper (vector<int>& nums,vector<int>ans,vector<vector<int>>& finalAns,int idx){
        if(idx==nums.size()){
            finalAns.push_back(ans);
            return;
        }
        helper(nums,ans,finalAns,idx+1);
        ans.push_back(nums[idx]);
        helper(nums,ans,finalAns,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>> finalAns;
        helper(nums,ans,finalAns,0);
        return finalAns;
    }
};*/