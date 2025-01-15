/*

    # Minimum time to Complete the trip

                   [1   2   3]
         buses->   b1  b2  b3

    ## Description :-

        1. bus1 complete their 1 trip in 1 hour
        2. bus2 complete their 1 trip in 2 hour
        3. Bus3 Complete their 1 trip in 3 hours


    
        After 1 hour [# Total trip - 1]

            [ 1    0     0]  bus1 only completed trip , both are on the way

        After 2 hour [# total trip 3]

            [2     1     0]  bus 3 completed 2 trip , bus2 completed 1 trip 

        after 3 hours [#total Trip 5]

            [3    1    1]  bus3 completed 3 trip & bus2 completed 1 & on the way &

        After Hour [#total trip 7]

            [4   2    1] bus1 completed 4 trip, bus2 completed 2 trip 

        

    ## In my QUEstions -- total trip is given 5 trips , then how many needed to complete 5 trips // here 3 hour




*/
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:

    bool check(long long mid,vector<int>& time,int totalTrips){
        long long trips = 0;
        int n = time.size();

        for(int i=0;i<n;i++){
            trips +=mid/(long long)time[i];
        }
        if(trips<(long long)totalTrips) return false;
        else return true;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n = time.size();
        long long low =1;
        int mx = -1;
        for(int i=0;i<n;i++){
            mx = max(mx,time[i]);
        }
        long long high = (long long)mx*totalTrips;
        long long ans = -1;
        while(low<=high){
            long long mid = low+(high-low)/2;
            if(check(mid,time,totalTrips)==true){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};