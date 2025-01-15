/*

    ## Swapping Nodes in a linked list  {Leetcode 1721}

    (1)-->(2)-->(3)-->(4)-->(5)   given linked list k=2;

        # Swapp - K=2 From First to 2 & from End to 2

    After Swapping  

    (1)-->(4)-->(3)-->(2)-->(5)   New Linked List 


## (1) Brutual Force Methdoe :

            Step 01 --> count the total length of the linked list
            Step 02 --> create a node and traverse from first to Kth Node 
            Step 03 --> create a another node and traverse form first to (N-K+1);
            Step 04 --> Swap the values not node 
            Step 05 --> Return the linked list
        --------------------------------------------------------------------------------
            // Count the size of linked List
            int count =0;
            temp = head;
            while(temp){
                count++;
                temp = tem->next;
            }

            // Reach at the k *th Ndoe
            k--
            Node* temp1 = head;
            while(k--){
                temp1 = temp1->next;    
            }

            
            // reach at the N-k *th Node
            int m = (Count-k);
            m--;
            Node* temp2 = head;
            while(m--){
                temp2 = temp2->next;
            }

            // Swapping
            swap(temp1->val,temp2->val)

            return head;
        }

    
## (2) Optimized methode (Slow & Fast MEthdoe)

        # Step 01 --> fast ko (k+1)th node pe set kro  and set temp at Kth step from begining && slow ko head pe
        # Step 02 --> Fast and slow dono ko one one step se aage bdhao
        # Step 03 --> jb fast node null pe aa jaye tb slow node last se Kth step pe hoga
        # Step 04 --> now slow and temp ke values ko swap kr do
        # Step 05 --> return head;

    
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        k--;
        while(k--) temp=temp->next;
        ListNode* p1 = temp->next;      // Fast
        ListNode* p2 = head;            // Slow

        while(p1){
            p1 = p1->next;
            p2 = p2->next;
        }
        swap(temp->val,p2->val);
        return head;
    }
};


*/