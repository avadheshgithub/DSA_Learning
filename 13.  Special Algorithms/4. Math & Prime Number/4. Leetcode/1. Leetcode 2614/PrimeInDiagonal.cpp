/*
    ## Prime in Diagonal        [Leetcode 2614]
*/

//-------------------------> TC - O(n) <---------------------------

/*class Solution {
public:
    bool isPrime(int n){    // TC = (✓n)
        if(n==1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int mx = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            // upper diagonal
            if(isPrime(nums[i][i])){
                mx = max(mx,nums[i][i]);
            }
            // Lower diagonal
            if(isPrime(nums[i][n-i-1])){
                mx = max(mx,nums[i][n-i-1]);
            }
        }
        return mx;
    }
};*/