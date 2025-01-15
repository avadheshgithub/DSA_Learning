/*
    ## Minimum number of Arrows to Burst Balloons        [Leetcode 452]

    Problem Description -

        1. if there are overlapping intervals then just one arrow --> throw and all balloons will be burst

        2. if there are n number of non overlapping intervals then we have to throw n arrow to burst the balloons

        3. first we will have to calculate num of non-overlapping intervals . so that would be ans

        leetcode [435]  we have calculated that num of intervals removed that all non-overlapping intervals would be. 

        so non-Overlapping intervals = total - overlapping intervals
        ans = non-overalapping intervals

*/

/*bool cmp(vector<int>&a,vector<int>&b){
    return a[1] < b[1]; // sorting based on the end time
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& intervals) {
        int ans = 0;  // hint - max part code -->Leetcode 435 probl
        sort(intervals.begin(),intervals.end(),cmp);
        int lastEndTime = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0] <= lastEndTime){
                ans++;
            }
            else{
                lastEndTime = intervals[i][1];
            }
        }
        return intervals.size()-ans;   
    }
};*/