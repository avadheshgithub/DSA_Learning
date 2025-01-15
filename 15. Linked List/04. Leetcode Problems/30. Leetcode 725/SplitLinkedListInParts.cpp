/*


    ## Split The Linked List In Parts        [Leetcode 725]

    1---2---3---4----5----6-----7-----8----9---10        k=3

    so--> Hint - Split From the Last into k parts

    1----2----3----4     5---6---7-      8----9-----10


    Lenth of the parts = N/K or (N/k)+1,0

    int remaining = N%k = ---


    Solutiuon:-
                              1----2-----3----4                   5---6----7--
            Furzy  Node (-1)                        furzy Node (-1)

*/

/*class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        // Find the length of the complete LinkedList;
        int n=0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            n++;
        }
        // breaking the list in k lists
        vector<ListNode*> ans;
        int size = n/k;  
        int rem =n%k; // Remaining nodes
        temp = head;
        while(temp!=NULL){
            ListNode* c = new ListNode(100);
            ListNode* tempC = c;
            int s = size;
            if(rem>0) s++;
            rem--;
            for(int i=1;i<=s;i++){
                tempC->next = temp;
                temp = temp->next;
                tempC = tempC->next;
            }
            tempC->next = NULL;
            ans.push_back(c->next);
        }
        if(ans.size()<k){
            int extra = k-ans.size();
            for(int i=1;i<=extra;i++){
                ans.push_back(NULL);
            }
        }
        return ans;
    }
};*/