/*
    ## Set MisMatch    [Leetcode 645]

    Find missing & duplicate --> { , }

    
class Solution {
public:
    vector<int> findErrorNums(vector<int>& a) {
        // cyclic sort -> o(N)
        int n = a.size();
        for(int i=0;i<n;i++){
            while(a[i]!=a[a[i]-1]){
                swap(a[i],a[a[i]-1]);
            }
        }
        for(int i=0;i<n;i++){
            if(i+1 != a[i]) return {a[i],i+1};
        }
        return {};
    }
};
*/