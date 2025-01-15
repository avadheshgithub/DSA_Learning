/*
    ## Reverse Linked List II       [Leetcode 92]

    -- Description -
      reverse part of the linked List

      Right 5  & left 3 

      mid between both reverse


    ## Hint :-

        1. Break the list into 3 parts
        2. 1to(L-1) &   LtoR    (R+1) to n
        3. LtoR Reverse


            a    b       c   d                  ---> 4 pointers
        10--20--30--40--50--60--70--80--NULL
                L        R                     -----> Left & right Given

        # Hint :- b--c reverse and attach with  a & d

        10---20    30---40---50   60---70---80 
             a      b        c    d
        c= reverse(b)
        10---20    50---40---30   60---70---80
             a     c          b    d                   ---After reverse always it return head pointer

        attach a--->c   & b-->d


*/

/*class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Using Recusrion
        if(head==NULL || head->next==NULL) return head;
        ListNode* newHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right) return head;
        ListNode *a=NULL, *b = NULL, *c =NULL, *d = NULL;
        ListNode* temp = head;
        int n =1;
        while(temp){
            if(n==left-1) a=temp;
            if(n==left) b = temp;
            if(n==right) c = temp;
            if(n==right+1) d  = temp;
            temp = temp->next;
            n++;
        } 
        // list ko tod do
        if(a !=NULL) a->next = NULL;
        c->next = NULL;
        c = reverseList(b);
        // attach list
        if(a!=NULL) a->next = c;
        b->next = d;
        if(a!=NULL)return head;
        return c;
    }
};*/