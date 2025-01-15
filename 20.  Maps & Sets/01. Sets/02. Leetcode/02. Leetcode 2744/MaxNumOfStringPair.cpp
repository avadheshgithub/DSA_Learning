/*
    ## FInd the Maximum Number of String Pairs     [Leetcode 2744]
*/

//--------------------METHODE 01 - BRUTE FORCE APPROACH----------------------------------------
/*class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int n = arr.size();
        int count = 0;
        // Basic Approach Brute force  O(n^2)
        for(int i=0;i<n;i++){
            string rev = arr[i];
            reverse(rev.begin(),rev.end());
            for(int j=i+1;j<n;j++){
                if(rev==arr[j]) count++;
            }
        }
        return count;

    }
};*/

//--------------------METHODE 02 - Optimal APPROACH (Sets) ----------------------------------------
/*class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int n = arr.size();
        int count = 0;
        unordered_set<string>s;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        for(int i=0;i<n;i++){
            string rev = arr[i];
            reverse(rev.begin(),rev.end());
            if(arr[i]==rev) continue;
            if(s.find(rev)!=s.end()){
                count++;
                s.erase(arr[i]);
            }
        }
        return count;
    }
};*/

//--------------------METHODE 03 Most Optimal APPROACH----------------------------------------
/*class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int n = arr.size();
        int count = 0;
        unordered_set<string>s;
        for(int i=0;i<n;i++){
            string rev = arr[i];
            reverse(rev.begin(),rev.end());
            if(s.find(rev) !=s.end()) count++;
            else s.insert(arr[i]);
        }
        return count;
    }
};v*/
