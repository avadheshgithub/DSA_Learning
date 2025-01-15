/*
        ## Subarray Sum Equals K       [Leetcode 560]

        array {3,2,4,5,2,8,1,2,7}

        prefix sum = {3,5,9,14,16,24,25,27,34}           k=9;

        ele  = sum[i] - k 

        ## Methode 01 -
             check your ele present in prefix sum before index (i)th;
             if found -- count++;
             searching - Binary Search O(nlogn)

        ## Methode 02 - O(n)
            1. create a map;
            2. less than k element ---> insert all into map;
            3. if more than k element --> then ele = sum[i]-k
            2. check your ele present in map ? if not insert it into map
            3. if find count++;
*/
//---------------------------------------------- IF ELEMENTS ARE POSTIVE -------------------------------------------------------
/*class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>pre(n,0);
        pre[0] = arr[0];
        for(int i=1;i<n;i++){
            pre[i] = arr[i] + pre[i-1]; // Prefix sum Array
        }
        unordered_set<int>s;
        int count=0;
        for(int i=0;i<n;i++){
            if(pre[i]<k) s.insert(pre[i]);
            else if(pre[i]==k){
                s.insert(pre[i]);
                count++;
            }
            else{
                int rem = pre[i]-k;
                if(s.find(rem)!=s.end()) count++;
                s.insert(pre[i]);
            }
        }
        return count;
    }
};*/

//-------------------------------------------------- Methode 02 - Using MAP------------------------------------------------

/*class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>pre(n,0);
        pre[0] = arr[0];
        for(int i=1;i<n;i++){
            pre[i] = arr[i] + pre[i-1]; // Prefix sum Array
        }
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<n;i++){
            if(pre[i]==k){
                count++;
            }
            int rem = pre[i]-k;
            if(mp.find(rem)!=mp.end()) count +=mp[rem];
            mp[pre[i]]++;
        }
        return count;
    }
};*/