/*
        ## Top K Frequent Elemetns    [Leetcode 347]
*/


/*
        ## Methode 01

        1. hash map and frequency
        2.  min heap

class Solution {
public:
    typedef pair<int,int>pi;// Defined
    vector<int> topKFrequent(vector<int>& arr, int k) {
        // map - <ele,freq>
        unordered_map<int,int>mp;
        for(int ele:arr) mp[ele]++;

        // heap pair is <freq,ele>
        priority_queue<pi,vector<pi>,greater<pi> > pq;
        for(auto x:mp){
            pq.push({x.second,x.first}); // push into heap but pair reverse
            if(pq.size()>k)pq.pop();
        }
        vector<int>ans;
        while(pq.size()>0){
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        return ans;

    }
};


*/

/*class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap; // Step 1: Count frequency of each element
        for (int num : nums) {
            freqMap[num]++;
        }
        
        // Min-heap to store pairs of (frequency, element)
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        // Step 2: Push elements into the heap based on their frequency
        for (auto& entry : freqMap) {
            minHeap.push({entry.second, entry.first}); // Push frequency and element
            if (minHeap.size() > k) { // Keep only top k elements in the heap
                minHeap.pop();
            }
        }
        
        // Step 3: Extract elements from the heap
        vector<int> ans;
        while (!minHeap.empty()) {
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        
        return ans;
    }
};*/