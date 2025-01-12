/*
    ## Max Consecutive Ones III         [Leetcode 1004]


    - count the num of consquitve num of 1's  and 
        k=2 mean  atmost 2 times we can convert 0--->1;
    
        nums = {1,1,1,0,0,0,1,1,1,1,0}

        #       i
        #       j

        Steps 
                int maxLen =0;
                int fli=0;
                int k=2;
            1. if(nums[j]==1)  j++;
            2. if(nums[j]==0)  
                if(flip<k) {
                    flip++;
                }
                else{
                    len = j-1;
                    maxLen = max(maxlen,len);
                }
*/

//---------------------------1ST METHODE ----------------------------------

/*class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
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
        return maxLen;
    }
};


//----------------------------2ND METHODE ---------------------------------

/*class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0, n = nums.size();
        while (j < n) { // Decrease `k` for each 0 encountered
            if (nums[j] == 0) k--;
            if (k < 0) { // If `k` becomes negative, shrink the window from the left
                if (nums[i] == 0) {
                    k++;
                }
                i++;
            }
            j++;// Expand the window by moving `j`
        }
        return j - i; // The maximum length is simply the size of the final window
    }
};
*/