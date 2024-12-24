/*
    ## Merge Intervals                       [Leetcode 56]

    Problem Description -
        if there are overlapping meetins then merge its start and end points
        and return non overlapping intervals

        Ex . [{1,5},{3,7},{4,9}]
        ans = {1,9}

    
    # Solution 01
        1. sorting based on --->(end times
        2. reading all intervals from right to left

        after merging 
            a.............b
                c................d
            start = min(a,c)
            end = max(b,d)

    # Solution 02
        1. sorting based on --->( start times
        2. reading all intervals from left to right

*/



//-------------------------------SOLUTION 01------------------------------------
/*bool cmp(vector<int>&a, vector<int>&b){
    return a[1] < b[1];
}
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),cmp);
        vector<vector<int>>result;
        int n = intervals.size();
        result.push_back(intervals[n-1]); // pushing last element into result
        for(int i=n-2;i>=0;i--){
            vector<int>curr = intervals[i]; // curr element that is starting from last-2
            if(curr[1]>=result[result.size()-1][0]){
                // curr and >= last.start -> overlapping
                result[result.size()-1][0] = min(result[result.size()-1][0],curr[0]);
                result[result.size()-1][1] = max(result[result.size()-1][1],curr[1]);
            }
            else{
                result.push_back(intervals[i]);// if no overlapping direct push into result
            }
        }
        reverse(result.begin(),result.end()); 
        return result;
    }
};*/




//--------------------------SOLUTION 02 ----------------------------------------
/*bool cmp(vector<int>&a, vector<int>&b){
    return a[0] < b[0];
}
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),cmp);
        vector<vector<int>>result;
        int n = intervals.size();
        result.push_back(intervals[0]); // pushing last element into result
        for(int i=1;i<n;i++){
            vector<int>curr = intervals[i]; // curr element that is starting from last-2
            if(curr[0]<=result[result.size()-1][1]){
                // curr and >= last.start -> overlapping
                result[result.size()-1][0] = min(result[result.size()-1][0],curr[0]);
                result[result.size()-1][1] = max(result[result.size()-1][1],curr[1]);
            }
            else{
                result.push_back(intervals[i]);// if no overlapping direct push into result
            }
        }
        return result;
    }
};*/