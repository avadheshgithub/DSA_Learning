/*
        ## Minimum penalty for a shop      [Lettcode 2483]
        
        string = YYNY

        extra size take extra array 

        prefix sum for N == 0 0 0 1 1
        Suffix sum for Y == 3 2 1 1 0
*/

/*class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.length();
        vector<int> pre(n + 1, 0); // Cumulative 'N' count before the kth hour
        vector<int> suf(n + 1, 0); // Cumulative 'Y' count after and including the kth hour
        
        // Compute pre array (number of 'N' before each hour)
        for (int i = 1; i <= n; i++) {
            pre[i] = pre[i - 1] + (customers[i - 1] == 'N' ? 1 : 0);
        }

        // Compute suf array (number of 'Y' after and including each hour)
        for (int i = n - 1; i >= 0; i--) {
            suf[i] = suf[i + 1] + (customers[i] == 'Y' ? 1 : 0);
        }

        // Find the minimum penalty and the corresponding hour
        int minPen = INT_MAX;
        int bestHour = n; // Default to closing after the last hour
        for (int i = 0; i <= n; i++) {
            int pen = pre[i] + suf[i];
            if (pen < minPen) {
                minPen = pen;
                bestHour = i;
            }
        }

        return bestHour;
    }
};
*/