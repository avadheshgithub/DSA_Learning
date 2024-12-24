/*
    ## Remove the Nodes From a linked LIst           [Letcode 2487]

    - PRoblem Statement - Remove those node whose have the next greater elememnt 

        Modifies linked list return (With distinct node values
    )
    
    1. push all linked list elemt into stack<ListNode*>st;
    2.  int max = st.top();
    3. traverse stack and compare if it is greater then max
    4. add into your new linked list and pop this
    5. again traverse and compare
*/


/*class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode* >st;
        while(head){
            st.push(head);
            head = head->next;
        }

        ListNode* tail = st.top();
        st.pop();
        int mx = tail->val;
        while(!st.empty()){
            List* top = st.top();
            st.pop();

            if(top->val)>=mx{
                top->next = tail;
                tail = top;
                mx = top->val;
            }
        }
        return tail;
    }
};*/