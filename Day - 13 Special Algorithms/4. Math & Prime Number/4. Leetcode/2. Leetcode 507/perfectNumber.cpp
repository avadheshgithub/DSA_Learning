/*
        ## Perfect Number        [Leetcode 507]
*/


//-------------------------METHODE 01 -------------------------------
/*class Solution {
public:
    bool checkPerfectNumber(int n) {
        int sum = 0;
        for(int i=1;i<sqrt(n);i++){
            if(n%i==0) sum+=i;
        }
        for(int i=sqrt(n);i>1;i--){
            if(n%i==0) sum+=n/i;// using factors pair property
        }
        return (sum==n);
    }
};*/



//-----------------------METHODE 02 ------------------------------------
/*class Solution {
public:
    bool checkPerfectNumber(int n) {
        int sum=0;
        for(int i=1;i<n;i++){
            if(n%i==0) sum+=i;
        }
        return (sum==n);

    }
};*/