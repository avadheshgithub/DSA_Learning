/*
        ## Maximum units on a truck    [Leetcode 1710]

        // tc. o(nlogn)
*/

/*bool cmp(vector<int>&a, vector<int>&b){
    return a[1]>b[1];
}
class Solution {
public:
    int maximumUnits(vector<vector<int>>& arr, int truckSize) {
        sort(arr.begin(),arr.end(),cmp);
        int profit = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i][0] <= truckSize){
                profit += arr[i][0]*arr[i][1];
                truckSize -= arr[i][0];
            }
            else{
                profit += truckSize*arr[i][1];
                truckSize=0;
            }
            if(truckSize==0) break;
        }
        return profit;
    }
};*/