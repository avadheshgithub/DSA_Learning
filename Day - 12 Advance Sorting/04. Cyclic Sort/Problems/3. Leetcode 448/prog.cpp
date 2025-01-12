/*
    ## Find all number diappreared in a array  [Leetcode 448]

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Using Cyclic Sort
        int n = nums.size();
        int i=0;
        while(i<n){
            int correctIdx = nums[i];
            if(nums[correctIdx]==nums[i] || correctIdx==i) return nums[i];
            else swap(nums[i],nums[correctIdx]);
        }
        return -1;
    }
};



Small changes --> code still correct



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

