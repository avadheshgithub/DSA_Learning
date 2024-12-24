/*

    ## Insertion Sort List           [Leetcode 147]

      temp  
      ()---
      Dummy
      
       head   next
      (4)----(2)---(1)----(3)----NULL
      curr


        ## Solution - Insertion Sort

        # Step 01 -- dummy node & temp
        # step 02 -- head & curr at first Node
        # Step 03 -- next at 2nd node
*/

/*class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        ListNode *curr=head, *next = NULL;
        while(curr){
            next = curr->next;
            temp = dummy;
            while(temp->next and temp->next->val <curr->val){
                temp = temp->next;
            }
            curr->next = temp->next;
            temp->next = curr;
            curr = next;
        }
        return dummy->next;
    }
};*/