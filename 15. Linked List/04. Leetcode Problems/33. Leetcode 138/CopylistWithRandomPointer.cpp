/*

    ## Copy list with random Pointer         [Leetcode 138]

    - Every node  point two nodes 
        - first point to next node
        - second , he point to random node


    Solution:-

        ## Deep copy- using dummy pointer creaqted by each dummy noder every times as numis there in given Linked list.. 
        ## now till now all  node random point to NULL

    Step 01 deep copy

        7----13----11----10-----1-----NULL

        deep coppy

        7----13----11----10-----1-----NULL

    Step 2  merge uniqly

           a t1
        /   7   13    11   10     1
  (-1)      |  /  |  /  |  /  |  /  |
   d        7     13     11    10     1     NULL
   td     b t2


    Step 03 assigning random Pointers of duplicates # random is given in question

        t2 = t1->next;
        if(t1->random) t2->random = t1->random->next;
        t1 = t1->next->next;


    # Step 04 romving the connections (seprate the duplicates list)

        7---(7)---13----(13)----11----(11)----10----(10)-----1-----(1)---NULL

        - bracket nodes are dummy nodes -- remove or seprate
            ## Solution -
                 even and odd linked list question


        d1   
        (-1)
        t1---
           d|t
            7---(7)---13----(13)----11----(11)----10----(10)-----1-----(1)---NULL
            t   |
                |
        d2-------
        (-1)
        t2
        
        t1->next = t            t2->next = t;
        t = t->next;            t = t->next;
        t1 = t1->next;          t2 = t2->next;
        
        at last
        t1->next = NULL;
        t2->next = NULL;


    /*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // Step 01 - create deep copy without random Pointer
        Node* dummy = new Node(0);
        Node* tempC = dummy;
        Node* temp = head;
        while(temp){
            Node* a = new Node(temp->val);
            tempC->next = a;
            tempC = tempC->next;
            temp = temp->next;
        }
        // Step 02 -create alterNate connection (merge)->both Linked List merge with unique
        Node* a = head;
        Node* duplicate = dummy->next;
        Node* b = duplicate;
        dummy = new Node(-1);
        Node* tempD = dummy;
        while(a){
            tempD->next = a;
            a = a->next;
            tempD = tempD->next;
            tempD->next = b;
            b = b->next;
            tempD = tempD->next;
        }
        dummy = dummy->next;
        //Step 03 Assignining the random connectionss
        Node* t1 = dummy;
        while(t1){     // t1 travel in origional & t2 tyravel in duplicates nodes
            Node* t2 = t1->next;
            if(t1->random) t2->random = t1->random->next;
            t1=t1->next->next;
        }
        //Step 04 removing the duplicates list now
        Node* d1 = new Node(-1);
        Node* d2 = new Node(-1);
        t1 = d1;
        Node* t2 = d2;
        Node* t = dummy;
        while(t){
            t1->next = t;
            t=t->next;
            t1 = t1->next;
            t = t->next;
            t2 = t2->next;
        }
        t1->next = NULL;
        t2->next = NULL;
        d1 = d1->next;   // Orogional with random
        d2 = d2->next;   // Duplicate  with random
        return d2;
    }
};
*/