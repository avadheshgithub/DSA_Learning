/*

## Delte the middle Node of a linked lsit  {Leetcode 2095}

    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 

 
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head-.next) return NULL;  // Empty list ya 1 element in list
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){     // Condtions can't be interChange -- Same ORder 
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = NULL , 
        ListNode* curr = head;
        while(curr!=slow) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        return head;
    }
};

*/