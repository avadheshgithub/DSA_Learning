/*
        ## Partition List       [Leetcode 86]

    10---80--40---30--60--70--15--NULL    x=41

    less than 41 ---at front side of list & greater than 41 just append in their respective order

    ANS-
    10--40--30--80--60--70--NULL

    # 1 linked list for less than 41
    # Anthoder linked list for greater than 41
    # connct last node of first list to first node of 2nd list 


    Solve -
     two node Farzi node

     low
     ()
     tl --------| 
           head |
               (10)--(80)--40--30---60--70--15--NULL
            temp      |
     high  -----------| 
     ()
     th


     # Step 01 - if value less than 41  connect trough low
     # Step 02 - if val>=41  connect trough high

     # at last connect low last node to high first node


*/

/*class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* lo = new ListNode(100);
        ListNode* hi = new ListNode (200);
        ListNode* tempLo = lo;
        ListNode* tempHi = hi;
        ListNode* temp = head;

        while(temp!=NULL){
            if(temp->val < x){
                tempLo->next = temp;
                temp = temp->next;
                tempLo = tempLo->next;
            }
            else{
                tempHi->next = temp;
                temp = temp->next;
                tempHi = tempHi->next; 
            }
        }
        tempLo->next = hi->next;
        tempHi->next = NULL;
        return lo->next;
    }
};*/