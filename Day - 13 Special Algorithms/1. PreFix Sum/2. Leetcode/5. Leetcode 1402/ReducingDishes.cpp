/*
        ## Reducing Dishes      [Leetcode 1402]

      Hint -->  sorting & suffix sum
*/

/*class Solution {
public:
    int maxSatisfaction(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int suf[n];
        suf[n-1] = arr[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i] = suf[i+1]+arr[i];
        }
        // find that pivot index from where i have to start for calculation coefficient
        int idx = -1;
        for(int i=0;i<n;i++){
            if(suf[i]>=0){
                idx=i;
                break;
            }
        }
        if(idx==-1) return 0;
        // calculate the max of like time cooffiecint
        int x=1;
        int maxSum=0;
        for(int i=idx;i<n;i++){
            maxSum += arr[i]*x;
            x++;
        }
        return maxSum;

    }
};*/