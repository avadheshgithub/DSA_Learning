/*


## linked List Cycle II  (Leetcode 142)

    ## Prbolem Statement - detect the cycle and return that node from where its cycle has been started

SOLU--
    Step 01 - detect cycle 
    step 02 - again temp ko head pe le jao and same procedure start
    step 03 - temp ko 1 se and fast/slow jha pe tha vhi se 1 aage bdhao
    step 94 - now ab jha pe temp and fast/slow equal ho vhi node return kr do --> cycle vhi se start hoga


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 


class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool flag = false;
        while(fast != Null && fast->next !=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                flag = true;
                break;
            }
        }
        if(flag==false) return NULL;
        else{
            ListNode* temp = head;
            while(temp!=slow){
                slow = slow->next;
                temp = temp->next;
            }
            return temp;
        }
    }
};



*/