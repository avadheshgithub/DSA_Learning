/*
        ## Boats To Save People     [Leetcode 881]

        TC.- O(nlogn)
*/

/*class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0 , j=people.size()-1;
        int bt = 0;// Num of baot
        while(i<=j){
            if(people[i]+people[j] <=limit){
                bt++; // Allocate a boat to pair
                i++; j--;
            }
            else{
                bt++; // Allocate a boat to heaviest
                j--;
            }
        }
        return bt;

    }
};*/