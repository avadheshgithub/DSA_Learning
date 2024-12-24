/*
        ## Count Nice Pairs in a Array [Leetcode 1814]

        arr (42,11,1,97)

        nice pair      Val       Rev Val
        1. (0,3) ---> 42+97      24+79
        #            = 121       = 121

        2. (1,2) ---> 11+1        11+1
        #             =12         = 12


*/
//--------------------------METHODE 01 - BRUTE FORCE APPROACH---------------------------
/*class Solution {
public:
    int rev(int n){
        int r =0;
        while(n>0){
            r*=10;
            r+=(n%10);
            n/=10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] + rev(nums[j])==nums[j] + rev(nums[i])) count++;
            }
        }
        return count;
    }
};*/


//---------------------------METHODE 02 - OPTIMAL APPROACH (map) -----------------------------

/*
    ## nums[i] + rev(nums[j]) == nums[j] + rev(nums[i])
    |
    |
    => nums[i] - rev[nums[i]] == nums[j] - rev(nums[j])  so count++;
         42 - 24                  97-79
         = 18                    = 18


        1. for every i in arr
        2. nums[i] = nums[i]-rev(nums[i]); 
        3. and store it into map
        4. so in map if there is twice ---> COunt+;
*/
/*class Solution {
public:
    int rev(int n) {
        int r = 0;
        while (n > 0) {
            r = r * 10 + (n % 10);
            n /= 10;
        }
        return r;
    }

    int fact(int n) {
        int f = 1;
        for (int i = 1; i <= n; i++) { // Start from 1, not 0
            f *= i;
        }
        return f;
    }

    int combi(int n, int r) {
        if (n < r) return 0; // Handle invalid cases
        return fact(n) / (fact(r) * fact(n - r));
    }

    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        unordered_map<int, int> m;

        // Modify nums to store their difference with reverse
        for (int i = 0; i < n; i++) {
            nums[i] -= rev(nums[i]);
        }

        // Count frequencies of the differences
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }

        // Use combination to calculate pairs
        for (auto x : m) {
            int f = x.second;
            if (f >= 2) { // Only calculate combinations if f >= 2
                count += combi(f, 2);
            }
        }

        return count;
    }
};*/



//---------------------------METHODE 02 - Optimal Approach ----------------------------------
