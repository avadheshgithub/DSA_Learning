/*
        ## 2 Keys Keyboard          [Leetcode 650]

        find highest factor ==> operation division
        if prime coming ==> num of operation = its number

        Ex -
            n=90

            num    high fact     num of operation
            90     <-- 45       90/45 = 2
            45     <-- 15       45/15 = 3
            15     <-- 5        15/5  = 3
            5      <-- 1        5/1   = 5
*/

/*class Solution {
public:
    int gd(int n){ // highest factor
        for(int i=n/2;i>=1;i--){
            if(n%i==0) return i;
        }
        return 1;
    }
    int minSteps(int n) {
        int count=0;
        while(n>1){
            int hf = gd(n);
            count+=(n/hf);
            n = hf;
        }
        return count;
    }
};*/



//--------------------------METHODE 02 => TC = O(n) -------------------------------
/*class Solution {
public:
    bool isPrime(int n){    // TC = (✓n)
        if(n==1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }

    int gd(int n){
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return n/i;
        }
        return 1;
    }

    int minSteps(int n) {
        int count=0;
        while(n>1){
            if(isPrime(n)){
                count+=n;
                break;
            }
            int hf = gd(n);
            count+=(n/hf);
            n = hf;
        }
        return count;
    }
};*/