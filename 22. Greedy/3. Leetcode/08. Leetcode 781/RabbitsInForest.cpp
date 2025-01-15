/*
    ## Rabbits in Forest      [Leetcode 781]

    # Solutions -

        ask to each Rabbit - how many rabbits have same color as you ? 
        - he will not include hisself

        based on this question -> find the min values that exiest in forest

     Tips
        - if same elements , there is possibility that may be there talking about each other (same color rabbits)

    1.    arr = {1,1,2} //1,1 are talking about each other
        ans - 1+1+3 = 5


    2.    arr = {10,10,10,10,10}; // all are talking about each other
        ans - 10+1 = 11

    3.    arr = {3,3,3,3,3}; // three rabits are talking about each other and other set started (last rabbit talking about other three rabbits that are not in given array)
        ans - (3+1)+4 = 8
        

    
        1.hash_map<val,key> // key->freq
        2. val and key equal then they all belongs to one group
        3. if more same value coming --> it would be from diff groups
*/



/*class Solution {
public:
    int numRabbits(vector<int>& arr) {
        unordered_map<int,int>mp;
        int result = 0;
        for(int i=0;i<arr.size();i++){
            if(!mp[arr[i]+1]){
                result += arr[i]+1; // we stated a new color group
                if(arr[i]==0) continue;
                mp[arr[i]+1] =1;
            }
            else{
                mp[arr[i]+1]++;
                int key = arr[i]+1;
                int val = mp[key];
                if(key==val){
                    // we found all the rabbits of the group
                    // eliminate the group
                    mp.erase(key);
                }
            }
        }
        return result;
    }
};*/