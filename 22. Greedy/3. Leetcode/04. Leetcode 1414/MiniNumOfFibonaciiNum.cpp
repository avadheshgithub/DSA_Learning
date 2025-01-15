/*
# Find the minimum number of fibbonacci number whose sum is k [Leetcode 1413]
# Solutions  -

    1  1  2  3  5  8  13  21 ..... 

    Whose sum is K  so Fibbo Numbers would be less than k's
    let k = 10
    start from end --> ( 8  + 2 ) == k

    TC - O(n)
    SC - O(n)
*/


/*class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        int c=1, c1=1;
        vector<int>v; // Stored the fibbo num into vector
        while(c<=k){
            v.push_back(c);
            int t = c+c1;
            c1 = c;
            c = t;
        }
        int count =0;
        int j = v.size()-1; // Starting from end
        while(k){
            if(v[j] > k) j--;
            else{
                k -= v[j];
                count++;
            }
        }
        return count;
    }
};*/