/*
        ## Baseball Game          (Leetcode 682)

    Game RUles  - insert all the element 

            while inserting 
            1. if D came -> new score would be double of previous score
            2. if x int --> push
            3. if + then -> sum of previous two score
            4. if c came -> remove the previous score

            return sum of all score

        ## Ex
        5  2  c   d    +

        5  2
        5  -  
        5  -  -   10 
        5  -  -   10   15
        Sum = 30

    ## Stack


*/
/*class Solution {
public:
    int calPoints(vector<string>& arr) {
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            if(arr[i].size()>1 or (arr[i].size()==1 and arr[i][0]>='0' and arr[i][0]<='9')){
                st.push(stoi(arr[i]));
            }
            else if (arr[i]=="C") st.pop();
            else if (arr[i]=="D") st.push(2*st.top());
            else{
                int val1 = st.top();
                st.pop();
                int sum = val1+st.top();
                st.push(val1);
                st.push(sum);
            }
        }
        int sum = 0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};*/