/*
        ## Unique Number of Occurence    [Leetcode 1207]

        Input: arr = [1,2,2,1,1,3]
    Output: true
    Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

    1---> 3 times
    2---> 2 times
    3---> 1 times

    not reapreated times occurence ---> TRUE


    ## SOLUTION -
        1. create map and store with its frequency
        2. create set and check each frequency in set
        3. if not in set insert into set 
        4. if frequency found in this set --> REturn false
*/

/*class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        unordered_set<int>s;
        for(auto x:m){
            int freq = x.second;
            if(s.find(freq) !=s.end()) return false; // if already present
            else s.insert(freq);
        }
        return true;
    }
};*/