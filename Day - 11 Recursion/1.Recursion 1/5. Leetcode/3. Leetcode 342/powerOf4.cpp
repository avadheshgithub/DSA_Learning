/*
    ## POWER OF 4   [lEETCODE 342]
*/  

/*class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        if(n==0 || n%4 != 0) return false;
        return isPowerOfFour(n/4);
    }
};*/

//-------------------------------------------------------

/*class Solution {
    public boolean isPowerOfFour(int n) {
        return  (n & (n - 1)) == 0 && n % 3 == 1;
    }
}*/