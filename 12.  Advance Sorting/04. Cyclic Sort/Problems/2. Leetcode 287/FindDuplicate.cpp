/*
    ## Find Duplicated Number     [Leetcode 287]

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Using Cyclic Sort
        int n = nums.size();
        int i=0;
        while(i<n){
            int correctIdx = nums[i];
            if(nums[correctIdx]==nums[i]) return nums[i];
            else swap(nums[i],nums[correctIdx]);
        }
        return -1;
    }
};
*/