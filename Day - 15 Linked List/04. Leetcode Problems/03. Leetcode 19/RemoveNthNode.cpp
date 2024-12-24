/*

## Remove Nth Node From End of List

    -***-->  nth From End = (len-n+1)th node from the start
    -***--> Now Remove



## Mthode 01--
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;
        while(temp!= NULL){
            len++;
            temp = temp->next;
        }
        if(n==len){
            head = head->next;
            return head;
        }
        int m = len-n+1;
        int idx = m-1; // idx of node to be deleted
        temp = head;
        for(int i=1;i<=idx-1;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};




## Methode 02 (Slow & FAst Approach)

    Step 01 -> Fast & slow at Head
    Step 02 -> Fast ko 3 Step AAge ()
    Step 03 -> Ab DOno ke ek ek Step Se aage
    Step 04 -> fast node NULL pe aa jaye ---> Slow Node will be the Nth Node

    Step 05 -> to delete this - 
        Step 01: fast and slow dono 
        Step 02: fast ko 1 steps aage rkho (fast = fast->next)
        Step 03: dono ko ek ek se bdhao (slow)

        for(int i=0;i<n+1;i++){
            fast = fast->next;

        }
        while(fast != NULL){
            slow = slow->next;
            fast = fast->next;
        }


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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;
        //Travserse fast to (n+1) steps
        for(int i=1;i<=n+1;i++){
            if(fast==NULL) return head->next;
            fast = fast->next;
        }
        //Move Slow and Fast at same pace
        while(fast!=NULL){
            slow = slow->next;
            fast = fast->next;
        }
        // Slow pointer is exactly at left of the Nth node Form the end
        slow->next = slow->next->next;
        return head;
    }
};
*/