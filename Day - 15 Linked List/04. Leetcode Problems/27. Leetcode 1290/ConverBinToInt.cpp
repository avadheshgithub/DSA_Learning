/*

    ## Convert Binary number in a linked List to integer  [Leetcode 1290]

*/

/*class Solution {
public:
    ListNode *reverse(ListNode *head){
        if(!head or !head->next) return head;
        ListNode* smallhead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return smallhead;
    }
    int getDecimalValue(ListNode* head) {
        head = reverse(head);
        int a=1,sum=0;
        while(head){
            sum+=a*(head->val);
            head= head->next;
            a*=2;
        }
        return sum;
    }
};*/