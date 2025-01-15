/*
    ##  Product of Array except Self   [Leetcode 238]

    arr = {1,2,3,4}
    pre_prod = {1,1,2,6}  1 fill and 2 ke phle prod & 3 ke phle prod & --- logic-> except itself
    
    suff_prod = {24,12,4,1} 1 fill and 3 ke bad prd & 2 ke bad prod & ---  logic -> except itself

    ans = pre_prod * suff_prod

    ---> Concept -> for every element -> product of all other elements = prod of all other in left * prod of all other in right part


------------------------------1ST--------------------------------------
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>pre(n);

        // prefix product array
        int p=nums[0];
        pre[0]=1;
        for(int i=1;i<n;i++){
            pre[i]= p;
            p*=nums[i];
        }

        // suff prod array
        p=nums[n-1];
        suf[n-1]=1;
        for(int i=n-2;i>=0;i--){
            suf[i]= p;
            p*=nums[i];
        }

        // ans array
        for(int i=0;i<n;i++){
            ans[i] = pre[i]*suf[i];
        }
        return ans;
    }
};


Modification --> only One vector

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>pre(n);

        // prefix product array
        int p=nums[0];
        pre[0]=1;
        for(int i=1;i<n;i++){
            pre[i]= p;
            p*=nums[i];
        }

        // suff prod array (in prefix only)
        p=nums[n-1];
        for(int i=n-2;i>=0;i--){
            pre[i]*= p;
            p*=nums[i];
        }
        return pre;
    }
};
---------------------------------2ND-------------------------------------------
/*class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int product = 1;
        int p2 = 1;
        int noz = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)noz++;
            product*=nums[i];
            if(nums[i]!=0) p2*=nums[i];
        }
        if(noz>1) p2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) nums[i]=p2;
            else nums[i] = product/nums[i];
        }
        return nums;
    }
};*/