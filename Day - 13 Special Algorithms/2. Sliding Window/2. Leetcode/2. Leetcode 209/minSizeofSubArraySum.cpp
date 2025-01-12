/*
    ## minimum size of subArray Sum      [Leetcode 209]

    hint --> find the minimum window size == thats sum is euqal to target

    nums = {1,2,3,4,6,3,4,3}  target=10
    #       i
    #               j

    sum = 0;
    int len = 0
    minLen = INT_MAX;
    int i=0;
    int j=0;

    while(j<n){
        sum+=arr[i];
        while(sum>=target){
            len = j-i+1;
            minLen = min(minLen,len);
            sum -= arr[i]
            i++;
        }
        j++;
    }
*/

//                               TC - O(n)

//---------------------------------FULL CODE--------------------------------
/*class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int len;
        int sum=0;
        int minLen = INT_MAX;
        int i=0, j=0;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                len = j-i+1;
                minLen = min(minLen,len);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        if(minLen==INT_MAX) return 0;
        return minLen;
    }
};*/