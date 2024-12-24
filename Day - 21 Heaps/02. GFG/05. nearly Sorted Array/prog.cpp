/*
    Given an array arr[], where each element is at most k away from its target position, you need to sort the array optimally.
    Note: You need to change the given array arr[] in place.

    Examples:

    Input: arr[] = [6, 5, 3, 2, 8, 10, 9], k = 3
    Output: [2, 3, 5, 6, 8, 9, 10]
    Explanation: The sorted array will be 2 3 5 6 8 9 10

*/

/*
class solution{
    public:
    void nearlySorted(vector<int>& arr, int k) {
        priority_queue<int, vector<int> , greater<int> >pq;
        int j=0;
        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
            if(pq.size()>k){
                arr[j++]= pq.top();
                pq.pop();
            }
        }
        while(pq.size()>0){
            arr[j++] = pq.top();
            pq.pop();
        }
    }
}

*/