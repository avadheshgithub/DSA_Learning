/*

    ## Remove duplicates from soted Lsit II    [Leetcode 82]

    # Soltuion - use dummy Node*

    ---> temp ko dummy pe & head ko first node pe
    ---> now traverse check the 
*/

/*class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode* temp = dummy;
        while(head){
            if(head->next and head->val == head->next->val){
                while(head->next and head->val == head->next->val){
                    head = head->next;
                }
                temp->next = head->next;
            }
            else temp = temp->next;
            head = head->next;
        }
        return dummy->next;
    }
};*/