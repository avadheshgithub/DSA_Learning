/*

## PRoblem Statement - Intersection of two linked list [Leetcode 160]

    10->1->2->3->4\
                   \
                   (5)->(6)->(7)->NULL;     // Ans -  5 is intersection
                   /
           1->3->4/

    # Step 01 - FInd the lenth of both size;
    # Step 02 - Large list ke temp ko aage lejao such that |lA-lB|
    # Step 03 - dono ko traverse kro
*/



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        listNode* tempA = headA;
        listNode* tempB = headB;
        int lenA = 0;
        while(tempA !=NULL){
            tempA++;
            tempA = tempA->next;
        }
        int lenB = 0;
        while(tempB != NULL){
            tempB++;
            tempB = tempB->next;
        }
        tempA = headA;
        tempB = headB;
        if(lenA>lenB){
            int diff = lenA-lenB;
            for(int i=1;i<=diff;i++){
                tempA = tempA->next;
            }
            while(tempA != tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
        else{
            int diff = lenB-lenA;
            for(int i=1;i<=diff;i++){
                tempB = tempB->next;
            }
            while(tempA != tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
        }
    }
};

**/