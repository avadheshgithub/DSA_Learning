/*
        ## Reveal the cards in increasing order     [Leetcode 950]

        Input: deck = [17,13,11,2,3,5,7]
        Output: [2,13,3,11,5,17,7]

        Problem Statement - 1 ko show kro next ko push_back kro -->aissa ans nikalo aur perfom ope

        hint -
            Step 01 - sort the array (2,3,5,7,11,13,17)
            Step 02 - ek show and next ko push_back  --->use a Queue of indexes
            Step 03 - use extra array for ans

            ans (2 ---  3 ---  5 ---- 7) //space now fill wisely---> after 7 there is no space 

        Solev
             int idx = q.front();
             ans[idx] = deck[i];
            

*/
/*class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        sort(deck.begin(),deck.end());
        queue<int>q; // 0 to n-1;
        for(int i=0;i<n;i++){
            q.push(i);
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int idx = q.front();
            q.pop();
            //poping front and pushing it to back
            q.push(q.front());
            q.pop();
            ans[idx] = deck[i];
        }
        return ans;

    }
};*/