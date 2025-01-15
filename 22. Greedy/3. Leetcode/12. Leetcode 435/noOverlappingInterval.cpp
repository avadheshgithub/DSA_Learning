/*
    ## Non overLapping Intervals           [Leetcode 435]

    Problem Description -

        to make non overlapping intervals --> how many intervals we will have to remove

        so detect overalapping

        Solution (1) sort based on the end time 
        Solution (2) sort based on the start time



    // ---------------------------- Solution 01 ----------------------------------

    /*bool cmp(vector<int>&a,vector<int>&b){
    return a[1] < b[1]; // sorting based on the end time
    }
    class Solution {
    public:
        int eraseOverlapIntervals(vector<vector<int>>& intervals) {
            int ans = 0;
            sort(intervals.begin(),intervals.end(),cmp);
            int lastEndTime = intervals[0][1];
            for(int i=1;i<intervals.size();i++){
                if(intervals[i][0] <lastEndTime){
                    ans++;
                }
                else{
                    lastEndTime = intervals[i][1];
                }
            }
            return ans;
        }
    }; 



    //----------------------------SOLTUION 02-----------------------------------

     bool cmp(vector<int>&a,vector<int>&b){
    return a[0] < b[0]; // sorting based on the start time
    }
    class Solution {
    public:
        int eraseOverlapIntervals(vector<vector<int>>& intervals) {
            int ans = 0;
            sort(intervals.begin(),intervals.end(),cmp);
            int lastEndTime = intervals[0][1];
            for(int i=1;i<intervals.size();i++){
                if(intervals[i][0] <lastEndTime){
                    ans++;
                    lastEndTime = min(lastEndTime,intervals[i][1]); // changes --> added section
                }
                else{
                    lastEndTime = intervals[i][1];
                }
            }
            return ans;
        }
    };

*/