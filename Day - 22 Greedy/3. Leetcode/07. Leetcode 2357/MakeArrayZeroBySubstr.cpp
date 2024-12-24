/*
    ## Make Array Zero by Substracting Equal Amounts  [Leetcode 2357]

    --> Problem Explain 
    Ex- 
        arr = {1  5  0  3  5} 
        1. min = 1 && Substract 
        arr = {0  4  0  2  4}
        2. min = 2 && substract
        arr = {0  2  0  0  2}
        3. min = 2 && substract
        arr = {0  0  0  0  0}

    i need 3 operations to Equalize this Array to Zero Array

    ## Solution - 
    1. if there is zero then --> skip
    2. if repeated nums are then also by substracting itself and in 1step -> 0
    
    1. create set that avoid repeated values
    2. if values are Zeros then avoid to insert into set
    3. now as size of set--> we will have to perform such num of steps


*/

/*class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int>st;
        for(auto x:nums){
            if(x>0) st.insert(x);
        }
        return st.size();
    }
};*/