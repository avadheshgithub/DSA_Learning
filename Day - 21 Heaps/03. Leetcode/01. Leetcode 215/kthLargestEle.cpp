/*
    ## Kth Largest Element in a Array  {leetcode 215}

    Solution -

    1. Methode 01 : sort array and return n-k

    // --------------METHODE 02 --------------------
    1. first k (0-->k) elements ko max_heap;
    2. rest of the elem (k-->n-1)
    3. if ele<heap.top()
            1. heap.pop()
            2. heap.push(ele)
    4. heap me k elemtns only remain after perform
    4. ans  = heap.top()
*/



/*class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {  // O(klogk)
        priority_queue<int, vector<int>, greater<int>> pq;  // Min-heap
        for(int i=0;i<n;i++){
            pq.push[arr[i]];
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top(); // Step 03: The top of the heap is the k-th largest element
    }
};*/



// ---- Kth Smallest Element in Array -------------


/*int kthSmallest(vector<int> &arr, int k) {
        priority_queue<int>pq;
        //step 01
        for(int i=0;i<k;i++){
            pq.push(arr[i]);
        }
        //step 02
        for(int i=k;i<arr.size();i++){
            if(arr[i]<pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        // step 03
        int ans = pq.top();
        return ans;
        
    }*/
