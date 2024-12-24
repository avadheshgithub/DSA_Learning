/*

    ## Rotate List [Leetcode 61]


    ## Array

     1    2    3    4   5    6   7        (Rotation k=2)

     7-1-2-3-4-5-6
     6-7-1-2-3-4-5                    Final Ans After two Rotation


    ## Linked List

    (1)-->(2)-->(3)-->(4)-->(5)-->NULL      (k=2)
        add kr do (5)
        add kr do (4)
    (4)-->(5)-->(1)-->(2)-->(3)-->NULL


              head    temp    tail
    # Step 01 - 1-->2-->3-->4-->5       (traverse and reach at N-K th step)  && Assign Temp
    # Step 02 - At last node --Assign tail & first node -->Head   
    # Step 03   
                tail->next = head;  (Add cyle)
                head = temp->next;
                temp->next = NULL 
*/




/*class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int n=0; // Length
        if(head==NULL || head->next = NULL) return head;
        ListNode* temp = head;
        ListNode* tail = NULL;
        while(temp!=NULL){
            if(temp->next==NULL) tail = temp;
            temp = temp->next;
            n++;
        }
        k = k%n;
        if(k==0) return head;
        // i have to place temp at (N-K)th length
        temp = head;
        for(int i=1;i<n-k;i++){
            temp = temp->next;
        }
        tail->next = head;
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};*/


/*
        #  Methode 02 fast and slow   (Work only when (k<n))

        # STep 01 -> Slow = fast = head;
        # STep 02 -> move fast k steps ahead;
        # Step 03 -> move slow and fast by 1 step
        # Step 0  -> fast->next = head;
        # Step 05 -> head = slow->next;
        # Stepp 06 -> slow->neaxt = NULL
*/