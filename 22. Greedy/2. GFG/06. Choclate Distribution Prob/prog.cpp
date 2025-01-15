/*
     ## Choclate Distribution Problem     [GFG]


     Problem -
       1. n number of students
       2. m number of choclate distribute
       3. Return a minimum diff between min and max

       ## Think -
        0. Sort the vector
        1. Sliding Window Where k = 
        2. Slide window by 1 and in window
        3. min--> First Element
        4. Max--> Last element
        5. Return the Min Difference
*/


/*Class Solutions{
public:
    int findMinDiff(vector<int>& a, int m) {
        sort(a.begin(),a.end());
        int i = 0; // Minimum
        int j = m-1; // Maximum
        
        int mini = INT_MAX;
        while(j<a.size()){
            int diff = a[j]-a[i];
            mini = min(mini,diff);
            i++;
            j++;
        }
        return mini;
    }
}*/