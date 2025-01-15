/*
    ## SOrt List                   [Leetcode 148]


    (5)---(1)--(3)--(4)--(2)--(6)----(2)--(4)--->null

    - linked list ko tod do
    - uske tukde ko sort kro
    - merge kr do

    how to find middle for cut the linked list
    - recursion is used to sort linked list 

*/

/*class Solution {
public:
    ListNode* merge(ListNode* a, ListNode* b) {

        //Space Complexity O(1)
        ListNode* c = new ListNode(100);
        ListNode* temp = c;
        while(a!=NULL && b!=NULL){
            if(a->val <= b->val){
                temp->next = a;
                a = a->next;
                temp = temp->next;
            }
            else {
                temp->next = b;
                b = b->next;
                temp = temp->next;
            }
        }
        if(a==NULL) temp->next = b;
        else temp->next = a;
        return c->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        // Find the left middle of list
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        // now slow is at left middle
        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next = NULL; // Tod do list ko
        a= sortList(a);
        b = sortList(b);
        ListNode* c = merge(a,b);
        return c;

    }
};*/