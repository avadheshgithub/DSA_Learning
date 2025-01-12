/*
    ## Smallest value after replacing with sum of prime factors [leetcode 2507]


    Ex - 60 --> prime factor 2,3,5
         10 --> rime factor 2,5
         7 ---> 7 itself

         so ans = 7
*/


/*class Solution {
public:
    bool isPrime(int n){    // TC = (✓n)
        if(n==1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }

    int smallestValue(int n) {
        if(isPrime(n)) return n;
        int sum=0;
        // kaam
        for(int i=1;i<sqrt(n);i++){ // O(sqrt(n))
            if(n%i==0 && isPrime(i)){
                int m = n;
                while(m%i==0){  // O(logn)
                    sum+=i;
                    m/=i;
                }
            }
        }
        for(int i=sqrt(n);i>1;i--){
            if(n%i==0 && isPrime(n/i)){
                int m = n;
                while(m%(n/i)==0){
                    sum+=(n/i);
                    m/=(n/i);
                }
            }
        }
        if(sum==n) return n;// only for edge case num= 4
        return smallestValue(sum);
    }
};*/