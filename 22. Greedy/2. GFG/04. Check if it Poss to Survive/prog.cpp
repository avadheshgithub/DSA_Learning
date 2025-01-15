/*
    ## Chekc if it is Possible to survive on a island        [GFG]

    N--> max food per day you can buy
    s--> days to survive
    M--> food per day to survive

    Shop close on Sunday
    open --> Monday to Saturday 
*/

/*
class Solution
    int minimumDays(int S, int N, int M) {
       int maximumStorage = 6 * (N-M);
        if(S>6 && maximumStorage < M) return -1;
          
         int sunday = S/7; // Total Sundays
         int buyingday = S-sunday ;
         int totalfood = S*M;
         int ans = 0 ;
         if(totalfood % N == 0){
             ans = totalfood/N;
         }
         else{
             ans = totalfood/N + 1;
         }
         
         if(ans <= buyingday ){
            return ans ;
         }
         else {
             return -1;
         }
       
       
    }*/