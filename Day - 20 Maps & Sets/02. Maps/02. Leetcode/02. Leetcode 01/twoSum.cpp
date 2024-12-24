/*
        ## TWO SUM      [Leetcode 01]
*/


//-------------------------METHODE 01 - BRUTE FORCE ---------------------------
/*class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};*/



//------------------------METHODE 02 - Optimal Approach ----------------------------------
/*

    1. target = 9
    idx    0  1   2   3
    arr = {2 ,5 ,11 , 4}

    unordered_map<key,index>m;

    ele (target-arr[i])  found in map ? if yes---retrun idexes 
    1. i=0 (9-2) = 7 in mao ? no i++ and insert into map
    2. i=1 (9-5) = 4 in map ? no i++ and insert into map
    3. i=2 (9-11) = -2 in mao ? no i++; and insert into map
    4. i=3 (9-4) = 5 in map ? YES ------> reutrn indexes

*/
/*class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int n = nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            int rem = target-nums[i];
            if(m.find(rem)!=m.end()){
                ans.push_back(m[rem]);//index stored
                ans.push_back(i); // index
            }
            else m[nums[i]]=i; //if not find-->Push into map
        }
        return ans;
    }
};*/