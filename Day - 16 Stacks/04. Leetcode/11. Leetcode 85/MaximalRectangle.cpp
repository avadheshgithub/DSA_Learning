/*

    ## MAximal Rectangle            [Leeetcode 85]

    // connected with histrogram problem of  [Leetcode 84]
    and additional some logic for calculated the max area
*/

/*class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();

        // Step 01 - Calculate the NSI
        vector<int> nsi(n);
        stack<int> st;
        nsi[n - 1] = n;
        st.push(n - 1);
        for (int i = n - 2; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            nsi[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        // Step 02 - Calculate the PSI
        vector<int> psi(n);
        stack<int> gt;
        psi[0] = -1;
        gt.push(0);
        for (int i = 1; i < n; i++) {
            while (!gt.empty() && arr[gt.top()] >= arr[i]) gt.pop();
            psi[i] = gt.empty() ? -1 : gt.top();
            gt.push(i);
        }

        // Step 03 - Calculate Max Area
        int maxArea = 0;
        for (int i = 0; i < n; i++) {
            int height = arr[i];
            int breadth = nsi[i] - psi[i] - 1;
            int area = height * breadth;
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }

    int maximalRectangle(vector<vector<char>>& a) {
        int n = a.size();
        int m = a[0].size();
        vector<int> row(m, 0);
        int maxArea = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == '1') row[j] += 1;
                else row[j] = 0;
            }
            maxArea = max(maxArea, largestRectangleArea(row));
        }
        return maxArea;
    }
};*/