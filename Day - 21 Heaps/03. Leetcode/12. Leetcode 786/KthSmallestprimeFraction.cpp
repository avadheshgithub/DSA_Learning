/*
        ## kth Smallest Prime Function      [Leetcode 786]

    Methode 01 . O(n^2logk)

                1. Brute Force Approach - 

            class Solution {
        public:
            typedef pair<double,pair<int,int>>pi;
            vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
                int n = arr.size();
                priority_queue<pi>pq;
                for(int i=0;i<n;i++){
                    for(int j=i+1;j<n;j++){
                        double fraction = (double)arr[i] / arr[j]; // Handling double
                        if (pq.size() < k) {
                            pq.push({fraction, {arr[i], arr[j]}});
                        } else if (fraction < pq.top().first) {
                            pq.pop();
                            pq.push({fraction, {arr[i], arr[j]}});
                        }
                    }
                }
                return {pq.top().second.first,pq.top().second.second};
            }


    Methode 02 - optimized 

            class Solution {
        public:
            typedef pair<double,pair<int,int>>pi; //O(max(m,k)logn)
            vector<int> kthSmallestPrimeFraction(vector<int>& a, int k) {
                priority_queue<pi,vector<pi>,greater<pi>>pq;
                int n = a.size();
                for(int i=0;i<n;i++) pq.push({(double)a[i]/a[n-1],{i,n-1}});

                for(int i=0;i<k-1;i++){
                    auto val = pq.top(); pq.pop();
                    if(val.second.second-1>val.second.first){
                        pq.push({(double)a[val.second.first]/a[val.second.second-1],{val.second.first,val.second.second-1}});
                    }
                }
                return {a[pq.top().second.first],a[pq.top().second.second]};
            }
};
};
*/