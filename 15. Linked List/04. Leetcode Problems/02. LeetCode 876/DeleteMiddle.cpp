/*

// Delete the middle of the linked list :

    ## 10->20->30->40->50

    # (n IS odd)  Middle = N/2 
    # (n is Even) Middle =   (n/2)-1      &        n/2
                           Left Middle        Right Middle

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        int midIdx = len/2;
        ListNode* mid = head;
        for(int i=1;i<=midIdx;i++){
            mid = mid->next;
        }
        return mid;
    }
};
*/



// InterViewer ------------------------> I need the solution in the one l pass

/*
    # Solution - Slow & fast technequuee (Two Pointer methode)


    1. Right Middle Or middle ---> How to find
    while(fast !=NULL & Fast->NExt !=NULL) {
      slow = slow->next;
      fast = fast->next->next;  
    }

    2. Left Middle ----> How to find
    while(fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    1. Odd Length ---> When fast goes at Tail then ---> Slow Always at the middle Node; (Condition - Fast->NExt) == NULL ----> Loop tod do)


    2. Even LEngth --> intial Fast & Slow at the head Node---> (Condition  Fast == NULL)


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){     // Condtions can't be interChange -- Same ORder 
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};


*/
