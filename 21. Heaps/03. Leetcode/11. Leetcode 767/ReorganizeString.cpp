/*
        ## Reorganize String       [Leetcode 767]
*/


/*class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        priority_queue<pair<int,char>>pq;

        for(auto x:s) mp[x]++;
        for(auto x:mp) pq.push({x.second,x.first});

        string ans = "";
        while(pq.size()>1){
            auto one = pq.top(); pq.pop();
            auto two = pq.top(); pq.pop();

            ans += one.second;
            ans += two.second;

            if(--one.first) pq.push({one.first, one.second});
            if(--two.first) pq.push({two.first, two.second});
        }
        if(!pq.empty()){
            if(pq.top().first>1) return "";
            else if(ans.size()>0 and pq.top().second==ans.back()) return "";
            else ans+=pq.top().second;
        }
        return ans;
    }
};*/