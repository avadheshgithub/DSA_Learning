/*

    ## Problem Statement 

        - Koko Eating bananas;

    ## Description :-

        - banana are kept in piles 
        - in each piles have num of banana

        Ex [3,6,7,11]  // total banana 17

        - We have total 5 piles and each have their respective banana in each piles

        - KOKO have 8 hours , beacuse after that will come and she will not be able to eat

        - koko have to decide her minimum speed so that she can finish all banana within that 8 hours


    ## Some CAses

        1. if KOKO have speed of eating 27 to she will finish all the banana within 1 hour

        but this is not the minimum speed . koko have to utilize his all 8 hours and speed should be minimum


    ## How KOKO will eat banana

        Ex [3,6,7,11]  // total banana 17
        let  speed = 3 banana/hour

        1. she Entert the piles 1 and finish 3 banana and spent her 1 hour
        2. After piles 1 complete , she enter in 2nd piles and spenet 2 hour to finish 6 banan
        3. AFter finishing all banana of the piles 2, she enter the piles 3 and she spent 2 hour for having 6 banans but 1 banana remaining left in 3rd pile - KOKO will spent 1 hour for 1 banana beacuse only one banana left

        total 6 hour spent  - remaining 2 hours

        4. now she enter 4th piles and utilized his all two hour and eaten 6 banana in 4th piles. but remainnign 5 banana left and 8 hour are over 


        so she is not able to finish all the bnana within the given time with this speed 3 hour per banana

    
    ## APProach 

        low = 1 // koko want slowest eating
        high = 11 // max of the array
        count ++ // hour spent by the KOKO
        n = 8; // Given Hour


        mid = low+high/2    // (mid is Speed for eating )
        if(cout<=n) {
            ans = mid ;
            high = mid-1;
        }
        if(count>n) low = mid+1;


*/
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class Solution {
public:
    bool check(int speed,vector<int>& piles,int h){
        long long count = 0;// int coudn't handled
        int n = piles.size();
        for(int i=0;i<n;i++){
            if(speed >= piles[i]) count++;
            else if(piles[i]%speed==0) count +=(long long)piles[i]/speed;
            else count +=(long long)piles[i]/speed +1; // VV IMP
        }
        if(count>(long long )h) return false;
        else return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int mx = -1;
        for(int i=0;i<n;i++){
            mx = max(mx,piles[i]);
        }
        int low = 1;
        int high = mx;
        int ans = -1;  // used for store the updated num of hours taking by KOKO
        while(low<=high){
            int mid = low+(high-low)/2;
            if(check(mid,piles,h)==true){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};