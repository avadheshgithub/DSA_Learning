/*
        Last Stone WEIGHT         [Leetcode 1046]

        // TC  -- O(nlogn)   sc--O(nlogn)
        class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {
        priority_queue<int>pq; // max heap
        for(int ele:arr) pq.push(ele);
        while(pq.size()>1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if(x!=y) pq.push(x-y);
        }
       if(pq.size()==1) return pq.top();
       return 0;
    }
};



// ----------------------METHODE 02 -----USing ARRAY-----------------
class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {
        while(arr.size()>1){
            sort(arr.begin(),arr.end());
            int x = arr[arr.size()-1];
            arr.pop_back();
            int y = arr[arr.size()-1];
            arr.pop_back();
            if(x!=y) arr.push_back(x-y);
        }
        if(arr.size()==1) return arr[0];
        return 0;
    }
};


*/