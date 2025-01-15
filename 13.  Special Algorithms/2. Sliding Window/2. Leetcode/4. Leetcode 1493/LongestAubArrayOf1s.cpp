/*
    ## Longest subArray of 1s After deleting one element    [Leetcode 1493]

------------------------------------------------------------------------------
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0, j = 0; // Sliding window pointers
        int zeroCount = 0; // Count of 0s in the current window
        int maxLen = 0;

        while (j < nums.size()) {
            if (nums[j] == 0) {
                zeroCount++;
            }
            // Shrink the window if there are more than one 0s
            while (zeroCount > 1) {
                if (nums[i] == 0) {
                    zeroCount--;
                }
                i++;
            }
            // Calculate the length of the window (excluding one deletion)
            maxLen = max(maxLen, j - i);
            j++;
        }
        return maxLen;
    }
};
--------------------------------------------------------------------------
/*class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int k=1;
        int n = nums.size();
        int flips = 0, i = 0, j = 0;  // Sliding window boundaries
        int maxLen = 0;              // Initialize max length to 0
        while (j < n) {
            if (nums[j] == 1) j++; // Extend the window if current element is 1
            else {// nums[j] == 0
                if (flips < k) { // Use one flip to include this 0
                    flips++;
                    j++;
                } 
                else { // If no flips available, shrink the window from the left
                    while (nums[i] == 1) i++; // nums[i] == 0 here
                    i++;
                    flips--;  // Reduce the flip count as we're excluding a flipped 0
                }
            }
            // Update the maximum length of the window
            maxLen = max(maxLen, j - i);
        }
        return maxLen-1;
    }
};
*/