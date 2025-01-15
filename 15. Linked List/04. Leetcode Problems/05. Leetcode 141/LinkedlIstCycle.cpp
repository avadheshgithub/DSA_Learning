/*
    # Linked List Cycle (Leetcode 141)


    Problem Statement - check weather linked list is cyle or not

                (1)-->(2)-->(3)-->(4)-->(5)
                             |-----------|     Loop

        # slow & fast at head;
        # Slow lo 1 se bdhao & fast ko 2 se bdhao
        # agar while traversal kbhi dono equal ho jaye to ---> cycle hai  otherwise No Cyle



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 


class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != Null && fast->next !=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
};
**/


/*


## WHY Fast & Slow is working ----> to detect the cycle

    # ANS -
            if slow ko 1 time and fast ko 3  or 4 times or 5 times move kro tb bhi
                - catch hoga cycle 
                - necesserly it would be.alignas
            
            # slow - 1 times 
            # fast - 2 Times  //  3 Times  // 4 Times   // 5 times   ---------//------>

        # Cycle will be detetcted  For sure



*/