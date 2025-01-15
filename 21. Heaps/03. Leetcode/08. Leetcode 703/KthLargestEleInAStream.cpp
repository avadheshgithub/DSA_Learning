/*
        ## Kth Largest Element in a Stream     [Leetcode 703]

*/

/*class KthLargest {
public:
    int k;
    priority_queue<int,vector<int>, greater<int>>pq;
    KthLargest(int K, vector<int>& nums) {  //O(nlogk)
        k=K;
        for(auto x:nums){
            if(pq.size()<k) pq.push(x);
            else{
                if(x > pq.top()){
                    pq.pop();
                    pq.push(x);
                }
            }
        }
    }
    
    int add(int val) {
        if(pq.size()<k) pq.push(val);
        else{
            if(pq.top()<val){
                pq.pop();
                pq.push(val);
            }
        }
        return pq.top();
    }
};*/