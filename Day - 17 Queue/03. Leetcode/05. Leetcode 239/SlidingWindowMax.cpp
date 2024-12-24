/*
        ## Sliding Window Maximum     [Leetcode 239]

        --> Methode 01 ---> Using stack --> NGI & NPI
        --> Methode 02 ---> using dequeue -->  MONOTONIC DQEUE

*/

// ----------------------- DECREASING MONOTONIC DEQUE------------------------------

/*  idx   0  1  2 3  
    arr  {0,-1,-2,3,4,-5,6,4,7,-8}

        deque<int>dq;
        put element/index in decreasing order

        ans = {     }// i will push only when i ill be last of a sliding windoew of each sliding window 

        while(nums[i]>dq.back()) pop_back;
        if(nums[i]<dq.front()) dq.push_back(nums[i]) // maintain decreasing order

*/

/*class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1) return nums;
        int n = nums.size();
        deque<int>dq; // Decreasing order of element (index stored)
        vector<int>ans; // i should be min k-1 then only push
        for(int i=0;i<n;i++){
            while(dq.size()>0 && nums[i]>nums[dq.back()]) dq.pop_back();
            dq.push_back(i); // pushing the indexs
            int j = i-k+1; // starting of window 
            while(dq.front()<j) dq.pop_front();
            if(i>=k-1)  ans.push_back(nums[dq.front()]);
        }
        return ans;

    }
};*/