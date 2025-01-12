/*
    ## FInd the score of all prefixes of an array    [Leetcode 2640]
*/


//-------------------------1st Methode-----------------------------------
/*class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n = nums.size();
        vector<long long> res(n);
        res[0] = 2*nums[0];
        int maxi=nums[0]; // assume that first element is max till now
        
        for(int  i=1;i<n;i++){
            maxi = max(maxi,nums[i]);
            res[i] = nums[i]+maxi +res[i-1];
        }
        return res;
    }
};*/

/*------------------------------other Methode -----------------------------
class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n = nums.size();
        vector<long long> result(n);
        long long prefixSum = 0;  // Tracks cumulative sum
        long long totalMaxSum = 0; // Cumulative sum of max values so far
        int maxSoFar = 0;         // Tracks the maximum element so far

        for (int i = 0; i < n; i++) {
            prefixSum += nums[i];                  // Update prefix sum
            maxSoFar = max(maxSoFar, nums[i]);     // Update max value
            totalMaxSum += maxSoFar;               // Add max value to cumulative max
            result[i] = prefixSum + totalMaxSum;   // Calculate prefix score
        }
        return result;
    }
};
*/