/*
    Find all duplicated in a array      [Leetcode 442]


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_set<int>s;
        for(int val:nums){
            if(s.find(val) !=s.end()) ans.push_back(val);
            s.insert(val);
        }
        return ans;
    }
};

------------------------------2nd -------------------------------

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // cyclic sort
        int n = nums.size();
        int i=0;
        while(i<n){
            int correctIdx = nums[i]-1; //oth index
            if(nums[correctIdx]==nums[i]) i++; // changes from previous code
            else swap(nums[i],nums[correctIdx]);
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1) ans.push_back(nums[i]);
        }
        return ans;
    }
};


---------------------------------3RD-----------------------------------
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // cyclic sort Always this code for cyclic sort --> VVIMP
        int n = nums.size();
        for(int i=0;i<n;i++)while(nums[i]!=nums[nums[i]-1])swap(nums[i],nums[nums[i]-1]);
        vector<int>ans;
        for(int i=0;i<n;i++)if(nums[i]!=i+1) ans.push_back(nums[i]);
        return ans;
    }
};
*/