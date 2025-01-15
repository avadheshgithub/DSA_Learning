/*

        ## Remove linbked list elements [Leetcode 203]

        (1)-->(2)-->(3)-->(4)-->(5)-->(4)   val = 4

        After deletion of this linked list ( 4 is deleted)

        (1)-->(2)-->(3)-->(5)

    Sol
        # Step 01 - curr ko head pe rkho & traverse till NULL;
        # Step 02 - while traversal if (curr->val == val) curr ke node ko agle node se link agar vo bhi agar val ke qual na ho to

        #
        while(curr){
            if(curr->next && curr->next->val == val){
                curr->next = curr->next->next;
            }   
            else curr = curr->next; 
        }



class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;
        //code for handling continous same val
        while(curr and curr->val == val){  // current ho aur curr ke value ==val
            curr = curr->next;
        }
        head = curr; 
        // Code for handling mid occur val
        while(curr){
            if(curr->next and curr->next->val == val)curr->next = curr->next->next;
            else curr = curr->next;
        }
        return head;
    }
};

*/