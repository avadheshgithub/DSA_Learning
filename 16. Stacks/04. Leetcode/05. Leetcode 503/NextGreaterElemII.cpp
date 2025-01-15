/*
    ## Next Greater Element II           [Leetcode 503]

        ## Given - Circular Array

            Input: nums = [1,2,1]
            Output: [2,-1,2]
            Explanation: The first 1's next greater number is 2; 
            The number 2 can't find next greater number. 
            The second 1's next greater number needs to search circularly, which is also 2.
            Example 2:

            Input: nums = [1,2,3,4,3]
            Output: [2,3,4,-1,4]


        ## Hint - for circuler Array--- imagine:- mix array two times in next of first array

        ## Find Next Greater index

            //imagine a array --> 2n
            for(int i=0;i<2n;i++){
                i = i%n;
                while(!st.empty() && a[i]>a[st.top()]){
                    ans[st.top()] = a[i];
                    st.pop();
                } 
                st.push(i);   
            }

        ## Time Complext - O(n)
        ## Space Complexity - O(n);
*/


/*class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        int n = a.size();
        stack<int>st;
        vector<int>ans(n,-1);
        for(int i=0;i<2*n;i++){
            int idx = i%n;
            while(!st.empty() && a[idx]>a[st.top()]){
                ans[st.top()] = a[idx];
                st.pop();
            } 
            st.push(idx);   
        }
        return ans;
    }
};*/