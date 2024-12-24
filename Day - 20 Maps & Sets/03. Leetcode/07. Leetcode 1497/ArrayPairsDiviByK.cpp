/*
        ## Check if Array Pairs are divisible by K           [Leetcode 1497]

        -   Given an array of integers arr of even length n and an integer k.

            We want to divide the array into exactly n / 2 pairs such that the sum of each pair is divisible by k.

            Example 1:

                Input: arr = [1,2,3,4,5,10,6,7,8,9], k = 5
                Output: true
                Explanation: Pairs are (1,9),(2,8),(3,7),(4,6) and (5,10).

            Example 2:

                Input: arr = [1,2,3,4,5,6], k = 7
                Output: true
                Explanation: Pairs are (1,6),(2,5) and(3,4).

    
    ## SOLUTION - use Modules Operator and Hash Map

        arr = {1,2,3,4,5,6,7,8,9,10}    k=5;
        ele = [(ele%k)+k]%k  (to handle the negative number modulus)
        a = {1,2,3,4,0,1,2,3,4,0} and insert into maps along with frequncy

            if pairs are made ({1,4}{2,3}{4,1}{2,3}{0,0})

                #observation - either their sum is => 5 or 0


            (0,2)
            (4,2)
            (3,2)
            (2,2)
            (1,2)
          ---------
            Map1

        Step 01 - for ele 4 => k-4 = 1  now check 1 is present in map with same frequncy 

            if yes --> 
            if not --> return false;

            # if Ele 0 --- Check only frequency even 
*/



/*class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int ele:arr){
            ele = ((ele%k)+k)%k;  //to handle the negative number modulus
            mp[ele]++;
        }
        if(mp.find(0)!=mp.end()){
            if(mp[0]%2 !=0) return false; // check 0th Freq-->even
            mp.erase(0);
        }
        for(auto x:mp){
            int ele = x.first;
            int rem = k-ele;
            if(mp.find(rem)==mp.end()) return false;
            if(mp[ele] !=mp[rem]) return false;
        }
        return true;

    }
};*/