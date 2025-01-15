/*
    ## Meeting Rooms               [Leetcode 252]

    # Problem Description -
        given an array of meeting intervals where intervals[i] = {start,end}.
        Determine if a persone could attend all meetings

    # Solutions-
        1. a persone can attend all meeting only and only if there are non overlapping meetings meanwhile all meetings in a single room 

        so if rooms = 1 then return true or false;

        so in previous question [Leetcode 253] we have calculated the number of rooms required if there are overlapping meetings

        so
*/



/*class Solution {
public:
    bool canAttendMeetings(vector<Interval> &intervals) {
        if(intervals.size()==0) return true;
        vector<int>start,ending;
        for(auto x:intervals){
            start.push_back(x[0]);
            ending.push_back(x[1]);
        }
        sort(start.begin(),start.end());
        sort(ending.begin(),ending.end());

        int ans =0;
        int room=0;
        int i=0,j=0;
        while(i<start.size() && j<ending.size()){
            if(start[i]<ending[i]){
                // a meeting is starting
                room++;
                ans = max(ans,room);
                i++;
            }
            else if(start[i]>ending[j]){
                // a meeting is ending;
                room--;
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        return ans==1; // there is no overlapping meeting so num of rooms 1
    }
};*/
