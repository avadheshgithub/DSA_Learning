/*
    ## Maximize Sum of Array After K Negations   (Leetcode 1005)
*/

/*class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq(nums.begin(),nums.end()); // O(n)
        int sum = 0;
        for(int i=0;i<nums.size();i++) sum+=nums[i];// O(n)

        while(k--){ // O(nlogk)
            int el = pq.top();
            if(el==0) break;
            pq.pop(); 
            sum -=el;
            pq.push(-1*el);
            sum += (-el);
        }
        return sum;
    }
};*/