/*
        ## Relative Sort Array  [Leetcode 1122]

        there are two Arays

        1. Arr1 --->can contain duplicataes
        2. Arr2 ---> it contain unique

        so sort arr1 accoding to the arr2 order

        Condition - arr2 elements will be in arr1 and if arr2 traversed till end then rest of the elements will be sorted of arr1 in ascending order


        ## SOltuion -

                map 

                <ele and frequency>mp;  

                SC - O(n)
                TC - O(n)
*/
//---------------------------------- METHODE 01 -HASH MAP ------------------------------------------
/*class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> mp;
        for (auto x : arr1) {
            mp[x]++; // Fill frequency map for elements in arr1
        }
        int j = 0; // Initialize index for filling arr1
        // Place elements of arr2 in arr1 based on frequency
        for (int i = 0; i < arr2.size(); i++) {
            while (mp[arr2[i]] > 0) {
                arr1[j++] = arr2[i];
                mp[arr2[i]]--;
            }
        }
        // Place remaining elements from the map in sorted order
        for (auto x : mp) {
            while (x.second > 0) {
                arr1[j++] = x.first;
                x.second--;
            }
        }
        return arr1;
    }
};*/



//-----------------------------------METHODE 02 - Using ArRAy----------------------------------
/*class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int freq[1001] = {0};
        for (auto x : arr1) {
            freq[x]++; 
        }
        int j = 0; 
        for (int i = 0; i < arr2.size(); i++) {
            while(freq[arr2[i]]--) arr1[j++] = arr2[i];
        }
        for (int i=0;i<1000;i++){
            while(freq[i]>0){
                arr1[j++] = i;
                freq[i]--;
            }
        }
        return arr1;
    }
};*/