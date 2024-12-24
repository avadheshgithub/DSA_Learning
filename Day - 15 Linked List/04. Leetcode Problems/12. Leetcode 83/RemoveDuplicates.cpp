/*
    ## Remove Duplicates From Sorted List  [Leetcode 83]

    (10)-->(10)--(10)-->(20)-->(20)-->(30)--<(40)

    After Removal of the Duplicates 

        (10)-->(20)-->(30)-->(40)


    ## Psuedo Code

    Node* a = head;
    Node* b = head->next;

    while(b!=NULL){
        while(b!=NULL && b->val==a->val){
            b = b->next;
        }
        a->next = b;
        a=b;
        if(b!=NULL) b = b->next;
    }
*/





/*  
        
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* a = head;
        ListNode* b = head->next;
        while(b!=NULL){
            while(b!=NULL&& b->val==a->val){
                b = b->next;
            }
            a->next = b;
            //For next round
            a=b;
            if(b!=NULL) b = b->next;
        }
        return head;
    }
};
*/

