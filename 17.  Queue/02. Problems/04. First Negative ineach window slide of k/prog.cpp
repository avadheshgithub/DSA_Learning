/*
    ## First negative in each window of size k  

    idx   0  1  2 3  
    arr  {0,-1,-2,3,4,-5,6,4,7,-8}

    n = 10
    k = 3;
    window size = n/k
    Num of window sliding = n-k+1

    ## Breute Foce Approach (TC - O(n*k))

    ## Optimal SOlutions - using Queue  (TC - O(n))

        1. make a queue and push index of negative elements
*/

#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {3,-4,-7,30,7,-9,2,1,6,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    // ANs -4 -4 -7 -9 -9 -9 0 -1
    int k = 3;
    queue<int>q;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(arr[i]<0) q.push(i);
    }
    int i=0;
    while(i+k<=n){
        while(q.size()>0 && q.front()<i) q.pop();
        if(q.size()==0 || q.front()>=i+k) ans.push_back(0);
        else ans.push_back(arr[q.front()]);
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}