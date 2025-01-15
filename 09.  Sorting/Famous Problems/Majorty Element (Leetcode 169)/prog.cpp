/*
Q()  Find the majorty element that occur more than n/2 times


Built in Sort function time complexity :- O(nlogn)


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        return nums[n/2];

    }



    2nd methode 

    int n = nums.size();
    for(int i=0;i<n;i++){
        int count = 1;
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]) count++;
        }
        if(count>(n/2)) return nums[i];
    }
    return ;
};

*/