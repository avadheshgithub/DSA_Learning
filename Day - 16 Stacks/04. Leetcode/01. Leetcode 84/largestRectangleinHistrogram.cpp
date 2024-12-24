/*
    ## Largest Rectangle in Histrogram     [Leetcode 84]

    Solution -

            Area = height *  breadth

        Final Ans - max(area)

            where as    
                1. breadth = nsi[i] - psi[i] - 1  {nsi-->next smaller index & psi--> previous smaller idx}
                2. Height = arr is the height
                3. 

            # Calculate NSI

            # calculate PSI

*/

/*class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();

        // Step 01 - Calculate the NSI
        int nsi[n];
        stack<int>st;
        nsi[n-1] = n;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && arr[st.top()]>=arr[i]) st.pop();
            if(st.size()==0) nsi[i]=n;
            else nsi[i] = st.top();
            st.push(i);
        }

        //Step 02 - Calculate the PSI
        int psi[n];
        stack<int>gt;
        psi[0] = -1;
        gt.push(0);
        for(int i=1;i<n;i++){
            while(gt.size()>0 && arr[gt.top()]>=arr[i]) gt.pop();
            if(gt.size()==0) psi[i]=-1;
            else psi[i] = gt.top();
            gt.push(i);
        }

        //Step 03 - Calculate Max Area
        int maxArea = -1;
        for(int i=0;i<n;i++){
            int height = arr[i];
            int breadth = nsi[i]- psi[i] -1;
            int area = height*breadth;
            maxArea = max(maxArea,area);
        }
        return maxArea;
    }
};*/