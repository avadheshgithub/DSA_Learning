/*
    ## K items with maximum sum [Leetcode 2600]

    Solution -

        1. there are numOnes , numZeros , numNeg

        2. For max sum - Chosee all numOnes , then numZeroes and then numNeg
        3. but we have to choose only k items for max sum
*/

/*class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        // TC-> O(1)  && SC -> O(1)

        int sum = 0;
        int t = min(k,numOnes); // For NumOnes
        k-=t;
        sum+=t;

        t=min(k,numZeros); // For numZeros
        k-=t;

        t = min(k,numNegOnes); // for NumNegOnes
        k-=t;
        sum-=t;

        return sum;
    }
};*/