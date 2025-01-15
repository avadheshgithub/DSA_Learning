#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();

    // (1) Find the pivot index
    int idx = -1;
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            idx = i;
            break;
        }
    }

    if (idx == -1) { // if the array is already the greatest permutation
        reverse(nums.begin(), nums.end());
        return;
    }

    // (2) Find the smallest number greater than nums[idx] from the end
    int swapIdx = n - 1;
    while (nums[swapIdx] <= nums[idx]) {
        swapIdx--;
    }

    // Swap the found number with the pivot
    swap(nums[idx], nums[swapIdx]);

    // (3) Reverse the sequence after the pivot
    reverse(nums.begin() + idx + 1, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3};

    cout << "Original: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    nextPermutation(nums);

    cout << "Next permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
