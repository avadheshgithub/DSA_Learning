/*
        ## Range Sum QUery - Immutable    [Leetcode 303]


class NumArray {
public:
    vector<int>pre;
    NumArray(vector<int>& nums) {
        pre = vector<int>(nums.size());
        pre[0] = nums[0];
        int n = nums.size();
        for(int i=1;i<n;i++) pre[i] = pre[i-1]+nums[i];
    }

    int sumRange(int left, int right) {
        if(left==0) return pre[right];
        return pre[right]-pre[left-1];
    }
};

*/
