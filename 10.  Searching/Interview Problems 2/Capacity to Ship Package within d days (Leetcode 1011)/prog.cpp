/*
    ## Problem statement

        Weights = {1,2,3,4,5,6,7,8,9,10};

        days = 5;

    ## How to solve :- (Binary Search on ans)

        - capacity to ship -> Minimum

        - you have to pick up in a orderwise


        ******* i have to minimize capacity of ship , not days*********
    

        ## Logic (- let minimum capacity of ship --> 20 kg)

            Day - 01 --> 1,2,3,4,5   => 15 kg
            day - 02  --> 6,7        => 13 kg
            day - 03  --> 8,9        => 17 kg
            day - 04  --> 10         => 10 kg

             Note :- Within given days - all packagsa are  delivered but its not minimum capacity

        ## Logic (- let minimum capacity of ship --> 10 kg)

            Day - 01 --> 1,2,3,4     => 10 kg
            day - 02  --> 5          => 5 kg
            day - 03  --> 6          => 6 kg
            day - 04  --> 7          => 7 kg
            dat - 05  --> 8          => 8 kg

             Note - within given days - 2 packages are left if minimum cap 10


         ## Logic (- let minimum capacity of ship --> 15 kg)

            Day - 01 --> 1,2,3,4,5   => 15 kg
            day - 02  --> 6,7        => 13kg
            day - 03  --> 8          => 8 kg
            day - 04  --> 9          => 9 kg
            dat - 05  --> 10         => 10kg

             Note :- Within given days - all packagsa are  delivered & even thius is  minimum capacity


         ## Logic (- let minimum capacity of ship --> 14 kg)

            Day - 01 --> 1,2,3,4     => 15 kg
            day - 02  --> 5,6        => 11 kg
            day - 03  --> 7          => 7 kg
            day - 04  --> 8          => 8 kg
            dat - 05  --> 9          => 9 kg

             Note - within given days - 1 packages are left if minimum cap 14

        ## Logic (- let minimum capacity of ship --> 55 kg)

            Day - 01 --> 1,2,3,4,5,6,7,8,9,10     => 55 kg

             Note - day one , all packages are delivers . so it is max capacity (sum)


    
    ## FInal ANS  
    
            so here let max capacity -day 01 deleverird all package

            int high = sum of array
            int low = max element of array // so that each element can be deluvered individual

            so binary low to high  otimize our capacity so that within given days we can delever all packages  with minimum ship capacity
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

// Time complexity :- O(n*log(sum-max))

class Solution {
public:
    bool check(int mid,vector<int>& weights,int days){
        int n = weights.size();
        int m = mid;
        int count = 1;
        for(int  i=0;i<n;i++){
            if(m>=weights[i]){
                m -=weights[i];
            }
            else{
                count++;
                m = mid;
                m -=weights[i];
            }
        }
        if(count>days) return false;
        else return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int max = INT32_MIN;
        int sum = 0;

        for(int i=0;i<n;i++){
            if(max<weights[i]) max = weights[i];
            sum += weights[i];
        }
        int low = max;
        int high = sum;
        int minCapacity = sum;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(check(mid,weights,days)){
                minCapacity = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return minCapacity;
        
    }
};