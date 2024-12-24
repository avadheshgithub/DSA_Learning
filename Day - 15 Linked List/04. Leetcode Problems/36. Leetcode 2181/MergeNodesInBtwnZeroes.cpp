/*
        ## Merge Nodes in Between Zeroes      [Leetcode 218]
        
        head   first
        0-------2---7---3----1----0---3----2----0
                |            |        |    |
                --------------         ------
                     13                   5
        ans -

        13---5

        while(first){
          int sum =0;
          ListNode* last = first;
          while(last->val !=0){
               sum+=last->next;
               last = last->next;
          } 
          first->val = sum;
          first->next = last->next;  
          first = first->next;     
        }
        return head->next;


*/

/*class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* first = head->next;
        int sum=0;
        ListNode* last = NULL;
        while(first){
            sum =0;
            last = first;
            while(last->val !=0){
                sum += last->val;
                last = last->next;
            }
            first->val = sum;
            first->next = last->next;
            first = first->next;
        }
        return head->next;
    }
};*/