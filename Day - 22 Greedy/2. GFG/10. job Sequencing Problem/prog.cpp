/*
    ## Job Sequencing Problem       [GFG]

    Maximum Profit

    Job id-->   Deadline-->    Profiy-->
    1            4              20
    2
    3
    4
    5


    1. vector store pair of deadline and profit
    2. Sort the vector
    3. max heap --> higher deadline at top
    4. if deadline equal to index--> push max profit && pop from vector
*/

/*class Solution {
  public:
    vector<int> JobSequencing(vector<int> &id, vector<int> &deadline,
                              vector<int> &profit) {
        int n = id.size();
        vector<vector<int>> v;
        for(int i = 0; i < n; i++) {
            v.push_back({deadline[i], profit[i]});
        }
        sort(v.begin(), v.end());
        priority_queue<int> pq;
        int cnt = 0, res = 0;
        for(int i = n; i >= 1; i--) {
            while(v.size() && v.back()[0] == i) {
                pq.push(v.back()[1]);
                v.pop_back();
            }
            if(pq.size()){
            res += pq.top();
            pq.pop();
                cnt++;
            }
        }
        return {cnt, res};
        // code here
    }*/

