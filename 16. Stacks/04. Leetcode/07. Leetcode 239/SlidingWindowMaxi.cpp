/*
        ## Sliding Window Maximum   [Leetcode 239]

        slide your window by including k element and fidneach time max;

        Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
        Output: [3,3,5,5,6,7]

(1) ## Bruete Force APproach

        num of window = n-k+1;
        time complexity - O(n*k)


            class Solution {
        public:
            vector<int> maxSlidingWindow(vector<int>& arr, int k) {
                vector<int>ans;
                int n = arr.size();
                for(int i=0;i<n-k+1;i++){
                    int mx = INT_MIN;
                    for(int j=i;i<i+k;i++){
                        mx = max(mx,arr[j]);
                    }
                    ans.push_back(mx)
                }
                return ans;
            }
        };

(2) - Optimal Approach - USing Stack (Next greater Element and Index)

     idx   0    1     2      3      4      5       6     7      8
     arr   1    3    -1     -3      5      3       6     7      -
     ngi   1    4     4      4      6      6       7     8      



     How to Find Last Ans-

        for First element - in sliding window 1  3  -1  ---> next greater index 1 and it value is in sliding window ---> and check hi next gretwe ---->if not in sliding window then last element would be greatest

     ans   3    3     5      5      6      7      


    ## Worst Case - O(n*k)

    ## Best Case - O(n)

*/
/*class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    // calculating next greater index
        if(k==1) return arr;
        int n = arr.size();
        int ngi[n];
        stack<int>st;
        ngi[n-1]=n;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && arr[st.top()]<=arr[i]){
                st.pop();
            }
            if(st.size()==0) ngi[i]=n;
            else ngi[i]=st.top();
            st.push(i);
        }
        // FInd the max according to the sliding window and k size
        vector<int>ans;
        int j=0;
        for(int i=0;i<n-k+1;i++){
            if(j<i) j=i;
            int mx = arr[i]; // starting element of window is high-->Assumption
            int j = i;
            while(j<i+k){ // if nge is inside window
                mx = arr[j];
                if(ngi[j]>= i+k) break;
                j = ngi[j]; // go to the next greater
            }
            ans.push_back(mx);
        }
        return ans;
    }
};*/