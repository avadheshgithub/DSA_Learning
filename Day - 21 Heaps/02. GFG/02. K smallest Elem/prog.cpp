// ---- Kth Smallest Element in Array -------------

/*
    ## Methodes to solve
        1. sort array & arr[k-1];      O(nlogn)  SC -- O(logn) , 
        2. Selection sort - K pass     O(k*n)    SC -- O(1)
        3. Quick Select algo -         O(n)
        4. max Heap                        O(nlogk)
*/


/*         ## Methode 01  TC -O(n*logk)  SC-O(n) AuxilarySpace - O(k)
    int kthSmallest(vector<int> &arr, int k) {
        priority_queue<int>pq;                      // Size keep it k of heap
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
            if(pq.size()>k) pq.pop();
        }
        return pq.top();
    }
*/


/*       ## Methode 02
    int kthSmallest(vector<int> &arr, int k) {
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