/*
        ## Max Number of K sum Pairs    [Leetcode 1679]
*/

//---------------------METHODE 01 - USING ARRAY---------------------------
/*class Solution {
public:
    int maxOperations(vector<int>& a, int k) {
        sort(a.begin(), a.end());
        int n = a.size();
        int count = 0;
        int i = 0, j = n - 1;
        while (i < j) {
            if (a[i] + a[j] == k) {
                count++;
                i++;
                j--;
            } else if (a[i] + a[j] > k) {
                j--; // Move to a smaller value
            } else {
                i++; // Move to a larger value
            }
        }
        return count;
    }
};*/


//----------------------------------METHODE 02 - USING HASH MAP ----------------------------------
/*class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto x:nums) mp[x]++;
        int count = 0;
        for(auto x:nums){
            int diff = k-x;
            if(diff==x){
                count +=(mp[diff]/2); // encounter redundant values
                mp.erase(x);
            }
            else if(mp.count(diff)){
                count += min(mp[diff],mp[x]);
                mp.erase(x);
                mp.erase(diff);
            }
        }
        return count;
    }
};*/