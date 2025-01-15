/*

    ## Add two NUmber         [Leetcode 02]

    a
    2-------4-------3
    5-------6-------4
    b
    
    ()---(7)----(0)----(8)
    dummy

*/

/*class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum =0,carry = 0;
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        while(l1 or l2){
            sum = 0;
            if(l1){
                sum +=l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2 = l2->next;
            }
            sum +=carry;
            carry = sum/10;
            temp->next = new ListNode(sum%10);
            temp = temp->next;
        }
        if(carry)temp->next = new ListNode(carry);
        return dummy->next;
        
    }
};*/