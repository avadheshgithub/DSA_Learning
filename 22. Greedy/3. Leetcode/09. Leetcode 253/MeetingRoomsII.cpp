/*
    ## Meeting Rooms II     [Leetcode 253]

    1. Check the meeting start and end time
    2. if meeting are overlapping then we need seprate rooms
    

    # Steps to solve
        1. all start times -> store into one vector
        2. all end times -> store into another vector.
        3. sort the both vectors
        3. now compare start time and end time
        -----> Two pointer algorithem 
        4. if start>end then room++;
        5. if end>start then room--
        6. if start==end then start++ & end++
*/


/*class Solution {
public: 
    int minMeetingRooms(List<Interval> intervals) {
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
        return ans;
    }
}*/