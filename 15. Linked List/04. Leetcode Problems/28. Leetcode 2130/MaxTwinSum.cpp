/*

## MAximum twin Sum of a linked LIst   [Leetcode 2130]

    3----1---0---8----9----5----2---6---

    twin sum mean 

    first to last --> 3+6 = 9
    2nd to 2nd Last --> 1+2 = 3
    3rd to 3rd last ---> 0+5 = 5

    -----> max(twin sum)


    ## Hint - Palindrome Code
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
    int pairSum(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast and fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = reverse(slow);
        ListNode* temp = slow;
        int maxi=0;
        while(head and temp){
            maxi = max(maxi,temp->val+head->val);
            head = head->next;
            temp = temp->next;
        }
        return maxi;
    }
};*/