/*

    ## Final Price with a special Discount in a shop       (Leetcode 1475)

    Input: prices = [8,4,6,2,3]
    Output: [4,2,4,2,3]

    ## Hint - Next Smaller Amout if---> then Discount (Discount = next element)
            - if not found next smaller --> no discount


    ## FOund - NSI

        for(int i=0;i<n;i++){
            while(!st.empty() && a[i]<=a[st.top()]){
                a[st.top()] -= a[i] // Final Price = price - Discubt
                st.pop();
            }
            st.push(i);

        }

    ## Time Complexity - O(n);
    ## SPACE Compl - O(n)

*/
/*class Solution {
public:
    vector<int> finalPrices(vector<int>& a) {
        stack<int>st;
        for(int i=0;i<a.size();i++){
            while(!st.empty() && a[i]<=a[st.top()]){
                a[st.top()] -= a[i]; // Final Price = price - Discubt
                st.pop();
            }
            st.push(i);
        }
        return a;
    }
};*/