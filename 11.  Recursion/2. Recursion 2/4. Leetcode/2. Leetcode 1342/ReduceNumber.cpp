/*
    ## number of steps to reduce a number to Zero      [Leetcode 1342]
*/

/*class Solution {
public:
    int numberOfSteps(int n) {
        if(n==0) return 0;
        if(n%2==0) return 1+numberOfSteps(n/2);
        else return 1+numberOfSteps(n-1);
    }
};*/