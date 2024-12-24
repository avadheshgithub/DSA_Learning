/*
    ## Shop in Candy Store        [GFG]

    1. Calculating Mini Ruppes

       1. Buy minimum price candi and take free maximum price candies

    
    2. Calculating Max Ruppes
       
       1. Buy maximum price candi and take free candies of minimum prices
*/

/*
class Solution
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        sort(candies,candies+N);
        
        // Calculating min Rupee
        int mini = 0;
        int buy = 0;
        int free = N-1;
        while(buy<=free){
            mini = mini + candies[buy];
            buy++;
            free = free-K;
        }
        
        // Calculating Max ruppes
        int maxi = 0;
        buy = N-1;
        free = 0;
        while(free<=buy){
            maxi = maxi + candies[buy];
            buy--;
            free = free+K;
        }
        return {mini,maxi};
    }*/
