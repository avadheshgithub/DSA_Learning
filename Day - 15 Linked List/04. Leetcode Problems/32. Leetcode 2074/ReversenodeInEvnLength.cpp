/*

    ## Reverse Nodes in even Length groups              [Lettecode 2074]

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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* temp = head;
        int gap = 1;
        while(temp && temp->next){
            int remLen = 0;
            ListNode* t = temp->next;
            for(int i=1;i<=gap+1&&t!=NULL;i++){
                t = t->next;
                remLen++;
            }
            if(remLen<gap+1) gap = remLen-1;
            if(gap%2!=0) reverseBetween(temp,2,2+gap);
            gap++;
            for(int i=1;temp!=NULL&&i<=gap;i++){
                temp = temp->next;
            }
        }
        return head;
    }
};*/