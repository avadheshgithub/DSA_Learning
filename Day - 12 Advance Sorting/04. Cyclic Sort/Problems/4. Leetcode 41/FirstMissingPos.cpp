/*
    ## First Missing Positive    [Leetcode 41]

    class Solution {
    public:
        int firstMissingPositive(vector<int>& nums) {
            unordered_map<int,int>mp;
            int n= nums.size();
            for(int i=0;i<n;i++) mp.insert({nums[i],1});
            for(int i=1;i<=n+1;i++)if(mp.find(i)==mp.end()) return i;
            return 0;
        }
    };


---------------------------------2nd----------------------------------------


    class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // cycle sort
        int n = nums.size();
        int i=0;
        while(i<n){
            if(nums[i]<=0)i++;
            // correctIdx = nums[i]-1;
            // either negative or already right place pe
            else if(nums[i]<=0 || nums[i]>n ||nums[i]==i+1 || nums[nums[i]-1]==nums[i]) i++ ; 
            else swap(nums[i],nums[nums[i]-1]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) return i+1;
        }
        return n+1;
    }
};
*/