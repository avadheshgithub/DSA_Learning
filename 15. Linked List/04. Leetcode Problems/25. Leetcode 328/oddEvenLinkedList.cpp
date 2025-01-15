/*

        ## Odd Even Linked List  [Leetcode 328]

        1-------2------3-------4-------5--------NULL
        head
        odd    even


        class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head or !head->next) return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* newHead = even;
        while(even and even->next){
            odd->next = even->next; // Odd Linked List
            odd = odd->next;

            even->next = odd->next; // Even Linked List
            even = even->next;
        }
        odd->next = newHead; // Attach
        return head;
    }
};

*/