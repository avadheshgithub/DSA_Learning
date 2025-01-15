/*
    ## Corporate Flight Booking   [Leetcode 1109]
*/

/*class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& a, int n) {
        // Line Sweep Algorithm
        vector<int>res(n);
        for(int i=0;i<a.size();i++){    
            res[a[i][0]-1] += a[i][2];
            if(a[i][1]<n) res[a[i][1]] -= a[i][2];
        }
        for(int i=1;i<n;i++){
            res[i] +=res[i-1];
        }
        return res;
    }
};*/