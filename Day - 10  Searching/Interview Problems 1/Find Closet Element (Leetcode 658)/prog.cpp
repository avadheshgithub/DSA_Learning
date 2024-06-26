/*
Example 1:

Input: arr = [1,2,3,4,5], k = 4, x = 3
Output: [1,2,3,4]


    # Step 01 - return 4 element closest to its target value(x=3) in a vector and 
    
    # Step 02 - Sort that vector


    # Process :-

        - first search the target idex and then
        - lower Bound (lb) = target index - 1;
        - Upper Bound (ub) = target index + 1;

        now, please map the detance from its target value if

        ## Program

            if(| lb-target | < | ub-target|) {
                vec.push_back(lb);
                lb--;
            } 
            else if(| lb-target | > | ub-target| ) {
                vec.pusj_back(ub);
                ub++;
            }
            else {              // both side equal --> precedence given to left
                vec.push_back(lb);
                lb--;
            }

        ##

    ##       

*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

}

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> ans(k); // k elements insert 

        // Space Complexity - O(k)
        // Time Complexity - O(logn + klogk)
        if (x < arr[0]) {
            for (int i = 0; i < k; i++) {
                ans[i] = arr[i];
            }
            return ans;
        }

        if (x > arr[n - 1]) {
            int i = n - 1; // this is for original index
            int j = k - 1; // this is for vector ans
            while (j >= 0) {
                ans[j] = arr[i];
                j--;
                i--;
            }
            return ans;
        }

        // Finding target value
        int low = 0;
        int high = n - 1;
        bool flag = false;
        int t = 0; // representing index of ans
        int mid = -1;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (arr[mid] == x) {
                flag = true; // target value is present in array
                ans[t] = arr[mid];
                t++;
                break;
            }
            else if (arr[mid] > x) high = mid - 1;
            else low = mid + 1;
        }

        // Map the distance between lb & ub from target value & push values
        int lb = mid - 1;
        int ub = mid + 1;
        if (!flag) {
            lb = high;
            ub = low;
        }

        while (t < k && lb >= 0 && ub < n) {
            int d1 = abs(x - arr[lb]); // distance
            int d2 = abs(x - arr[ub]);
            if (d1 <= d2) {
                ans[t] = arr[lb];
                lb--;
            } else {
                ans[t] = arr[ub];
                ub++;
            }
            t++;
        }
        while (t < k && lb >= 0) {
            ans[t] = arr[lb];
            lb--;
            t++;
        }
        while (t < k && ub < n) {
            ans[t] = arr[ub];
            ub++;
            t++;
        }

        sort(ans.begin(), ans.end()); // O(klogk)
        return ans;
    }
};