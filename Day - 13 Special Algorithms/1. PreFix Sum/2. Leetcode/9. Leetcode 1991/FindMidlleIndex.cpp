/*
    ## Find the middle index in a array     [Leetcode 1991]


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0, leftSum = 0;
        for (int num : nums)  totalSum += num;
        // pivot index
        for (int i = 0; i < n; i++) {
            if (leftSum == totalSum - leftSum - nums[i]) return i;
            leftSum += nums[i];
        }
        return -1;
    }
};
*/

//---------------------------2ND METHODE ----------------------------
/*class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int rightSum = 0, leftSum = 0;
        for (int num : nums)  rightSum += num;
        // pivot index
        for (int i = 0; i < n; i++) {
            rightSum = rightSum-nums[i];
            if (leftSum == rightSum) return i;
            leftSum += nums[i];
        }
        return -1;
    }
};
*/