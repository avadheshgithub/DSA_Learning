#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

}


class Solution {
public:
    int specialArray(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        if(arr[0]>=n) return n;
        for(int i=0;i<n;i++){
            int len = n-i;
            if(arr[i]>=len && arr[i] !=arr[i-1] && len>arr[i-1]){
                return len;
            }
        }
        return -1;
    }
};