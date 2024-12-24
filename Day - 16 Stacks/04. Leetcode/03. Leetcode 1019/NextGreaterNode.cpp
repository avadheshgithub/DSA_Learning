/*
    ## Next Greater Node in Linked List         [Leetcode 1019]

    1. Reverse arr
    for(int i=0;i<n;i++){
        while(!s.empty() && a[i]>=s.top()) s.pop();
        if(!s.empty()) ans[i] = st.top();
        s.push(a[i])'
    }
    3. Reverse vector

    # Time Complexity - O(n)---> becuase an element is only once going to but pushed or pop
    # Space Complexity -O(n)---> while pop in worst case all element we can push in stack


    Now Linked List;

        1. Reverse Linked List
        1. while(head){
            while(!s.empty()&& head->next >=s.top());
            if(!s.empty()) ans[i] = s.top();
            s.push(head->next);
        }
        3. Reverse Vector
*/


/*class Solution {
public:
    int len = 0;
    ListNode* reverseLL(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nex = NULL;
        while (curr) {
            len++;
            nex = curr->next;
            curr->next = prev;  // Fixed typo: `cur` to `curr`
            prev = curr;
            curr = nex;
        }
        return prev;
    }

    vector<int> nextLargerNodes(ListNode* head) {
        head = reverseLL(head);
        stack<int> st;
        vector<int> ans(len, 0); // Initialize with `len`
        int i = 0;
        while (head) {
            while (!st.empty() && head->val >= st.top()) st.pop();
            if (!st.empty()) ans[i] = st.top();
            st.push(head->val);
            head = head->next;
            i++;
        }
        reverse(ans.begin(), ans.end());
        return ans; 
    }
};*/