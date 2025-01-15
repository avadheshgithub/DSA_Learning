/*
    ## Copy with Random Pointer          [Leetcode 138]

    Methode 01 Deep copy , alternate linking , mark random pointer abd renove Alternate connections

            Analysis - TC - O(n)  && SC - O(1)

    # METHIDE 02 - Using MAP

            Analysis - TC-O(n)  && SC O(n)

*/
//---------------------------------- METHODE 02 - USING MAP -------------------------------------------
/*class Solution {
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
        Node* b = dummy->next;
        Node* a = head;
        //STEP 02 - make a map of <origional,Duplicate>
        unordered_map<Node*,Node*>m;
        Node* tempa =a;
        Node* tempb = b;
        while(tempa!=NULL){
            m[tempa] = tempb;
            tempa = tempa->next;
            tempb = tempb->next;
        }
        for(auto x:m){
            Node* o = x.first; //Origional
            Node* d = x.second; //Duplicate
            if(o->random!=NULL){ //Kaam
                Node* oRandom = o->random; //From Origional ll--> Random
                Node* dRandom = m[o->random]; // For duplicate-->Random from map get it
                d->random = dRandom;
            }
        }
        return b;

    }
};*/