/*
        ## K closest Points to origin       [Leetcode - 973]
*/

/*class Solution {
public:
    typedef pair<int,pair<int,int>>pi;
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        priority_queue<pi>pq; // pq ele --> {dist, pair<int,int>}
        vector<vector<int>>ans;
        for(int i=0;i<arr.size();i++){
            int dist = arr[i][0]*arr[i][0] + arr[i][1]*arr[i][1];
            if(pq.size()<k) pq.push({dist,{arr[i][0],arr[i][1]}});
            else{
                if(dist<pq.top().first){
                    pq.pop();
                    pq.push({dist,{arr[i][0],arr[i][1]}});
                }
            }
        }
        while(pq.size()>0){
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};*/