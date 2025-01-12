/*
        ## Running sum of 1D array     [Leetcode-1480]


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};


------------------------------------------------------------------------

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        ans.push_back(nums[0]);
        for(int i=0;i<nums.size()-1;i++){
            ans.push_back(ans[i]+nums[i+1]);
        }
        return ans;
    }
};
*/