/*
     number of Visible people in a queue        (Leetcode 1944)

     in the right direction

     each people hamo many can see other peoples if they are in queue(Lines)

     - if any people always will se---


     ## Hint -----> next Greater Element 
*/


/*class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans(n,0);
        stack<int>st;
        st.push(arr[n-1]);
        ans[n-1] = 0;
        for(int i=n-2;i>=0;i--){
            int count = 0; // Every times count start with Zero
            while(st.size()>0 && arr[i]>st.top()){
                st.pop(); // numof times pop ould be count++;
                count++;
            }
            if(st.size()!=0) count++; // Near always will be seen
            ans[i] = count;
            st.push(arr[i]);
        }
        return ans;
    }
};*/