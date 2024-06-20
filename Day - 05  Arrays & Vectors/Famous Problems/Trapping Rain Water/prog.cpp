#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        vector<int> prev(n);
        prev[0] = height[0];
        for (int i = 1; i < n; i++) {
            prev[i] = max(prev[i - 1], height[i]);
        }

        vector<int> next(n);
        next[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            next[i] = max(next[i + 1], height[i]);
        }

        int waterTrapped = 0;
        for (int i = 1; i < n - 1; i++) {
            int min_height = min(prev[i], next[i]);
            if (min_height > height[i]) {
                waterTrapped += min_height - height[i];
            }
        }

        return waterTrapped;
    }
};

int main() {
    Solution solution;
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    int result = solution.trap(height);
    cout << "Water trapped: " << result << endl;

    return 0;
}
