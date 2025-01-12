/*
        ## Grumpy Bookstore owner      [Leetcode 1052]

    Hint - find that window that has most lost of satisfaction or most disatisfaction

            1-> grumpy
            0-> not grumpy
            minutes = 3 (min window 3 size can change 1--> 0)

            now where grumpy 1 then count number of satisfied customers

        Hint - find that window where grumpy is maximum 1 and number of customers are coming maximum


        # loss of satisfaction (currLoss) = PrevLoss + arr[j] - arr[i-1]
        #                                            if crmpy=1   if crumpy=1
*/




/*class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int k = minutes;
        vector<int>& arr = customers;
        int n = arr.size();
        int maxLoss = 0;
        int prevLoss = 0;
        for(int i=0;i<k;i++){
            if(grumpy[i]==1) prevLoss +=arr[i];
        }
        maxLoss = prevLoss;
        int maxIdx = 0;
        int i=1;
        int j=k;
        while(j<n){
            int currLoss = prevLoss;
            if(grumpy[j]==1) currLoss +=arr[j];
            if(grumpy[i-1]==1) currLoss -= arr[i-1];
            if(maxLoss<currLoss){
                maxLoss=currLoss;
                maxIdx = i;
            }
            prevLoss = currLoss;
            i++;
            j++;
        }
        // filling zeroes in grumpy array
        for(int i=maxIdx;i<maxIdx+k;i++){
            grumpy[i]=0;
        }
        // calculate sum of satisfaction
        int sum=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0) sum+=arr[i];
        }
        return sum;
    }
};*/