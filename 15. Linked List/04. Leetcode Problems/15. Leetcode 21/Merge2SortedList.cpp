/*
        ## Merge 2 Sorted Lists 


    #Methode 01

        tempA
        (1)--(2)--(5)--NULL
        (2)--(3)--(4)--(6)--NULL
        tempB

        # new LinkedList
        (1)--(2)--(3)--(4)--(5)--(6)--NULL;


    class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        // Space Complexity O(M+N)
        ListNode* tempA = a;
        ListNode* tempB = b;
        ListNode* c = new ListNode(100);
        ListNode* tempC = c;
        while(tempA !=NULL && tempB!=NULL){
            if(tempA->val<=tempB->val){
                ListNode* t = new ListNode(tempA->val);
                tempC->next =t;
                tempC = t; 
                tempA = tempA->next;
            }
            else{
                ListNode* t = new ListNode(tempB->val);
                tempC->next =t;
                tempC = t; 
                tempB = tempB->next;
            }
        }
        if(tempA==NULL) tempC->next = tempB;
        else tempC->next = tempA;
        return c->next;
    }
};








    ## Methode 02
    using Extra Node 

          a
        (-1)--(2)--(5)--NULL
      c
    (100)
      t
        (2)--(3)--(4)--(6)--(7)--(8)--NULL
         b

    Step 01 --> compare kro a and b --- a small ---> Connect C to a ---> a ko aage bdhao aur temp ko aage bdhao

        while(a!=NULL || b!=NULL){
            if(a->val <= b->val){
            t->next = a;
            a = a->next;
            t = t->next;
        } 
        if(a->val >= b->val){
            t->next = b;
            b = b->next;
            t = t->next;
        }      
        }


    class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {

        //Space Complexity O(1)
        ListNode* c = new ListNode(100);
        ListNode* temp = c;
        while(a!=NULL && b!=NULL){
            if(a->val <= b->val){
                temp->next = a;
                a = a->next;
                temp = temp->next;
            }
            else {
                temp->next = b;
                b = b->next;
                temp = temp->next;
            }
        }
        if(a==NULL) temp->next = b;
        else temp->next = a;
        return c->next;
    }
};
*/
