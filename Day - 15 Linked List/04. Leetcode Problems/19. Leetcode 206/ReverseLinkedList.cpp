/*
    ## Reverse Linked List     [Leetcode 206]

    1---2---3---4---5--NULL

    Reverse
    5--4--3--2--1--NULL



    ## MEthode 01 (Iterative Way)

 -------------------------------------------------->   let values exchange

    class Solution {
public:
    ListNode* getNodeAt(ListNode* head, int idx) {
        ListNode* temp = head;
        for (int i = 0; i < idx; i++) { // Fix index handling
            temp = temp->next;
        }
        return temp;
    }
    
    ListNode* reverseList(ListNode* head) {
        int n = 0;
        ListNode* temp = head;
        while (temp != NULL) { // Calculate the length of the list
            temp = temp->next;
            n++;
        }
        
        int i = 0;
        int j = n - 1;
        while (i < j) {
            ListNode* left = getNodeAt(head, i);  // Get the node at index i
            ListNode* right = getNodeAt(head, j); // Get the node at index j
            int t = left->val;
            left->val = right->val;  // Swap values
            right->val = t;
            i++;
            j--; // Fix decrement of j
        }
        return head;
    }

    ------------------------------------------->Iterative Approach (Emthode 02)

    prev, curr, next

    next = head;
    curr = head;

while(curr)
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
}
return previous


    class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL,*curr=head,*Next=head;
        while(curr){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;

        // Recursive Solution
        
    }
};
-------------------------------------------------Recursive Solution
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Using Recusrion
        if(head==NULL || head->next==NULL) return head;
        ListNode* newHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
};

};

*/