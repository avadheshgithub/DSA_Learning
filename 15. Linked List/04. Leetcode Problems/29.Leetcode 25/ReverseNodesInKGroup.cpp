/*

    ## Reverse Nodes In k-group [Leetcode 25]

dummy prev    head  next
    ()        1-------2------3----4----5----6----7----8---

    (k=3)
    3---2---1  6--5---4  7---8          // reversed  (#7--8  is not reverse because less than k)

*

class Solution {
public:
    int length(ListNode* head){
        int cnt =0;
        while(head){
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len = length(head);
        if(len<k or !head) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode *curr=dummy,*prev=dummy,*next=dummy;
        while(len>=k){
            curr = prev->next;
            next = curr->next;
            for(int i=1;i<k;i++){
                curr->next = next->next;
                next->next = prev->next;
                prev->next = next;
                next = curr->next;
            }
            prev = curr;
            len-=k;
        }
        return dummy->next;
    }
};
*/