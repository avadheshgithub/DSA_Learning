/*

        ## PalinDrome Linked List   {Leetcode 234}
 --------------------------------------------------------------------------->   
    Methode 01 -- Campare all values from first and last & i++,j--

                class Solution {
            public:
                ListNode* getNodeAt(ListNode* head, int idx) {
                ListNode* temp = head;
                for (int i = 0; i < idx; i++) { // Fix index handling
                    temp = temp->next;
                }
                return temp;
                
                bool isPalindrome(ListNode* head) {
                    int n = 0;
                    ListNode* temp = head;
                    while (temp != NULL) { // Calculate the length of the list
                        temp = temp->next;
                        n++;
                    }
                    int i = 0;
                    int j = n - 1;
                    while (i < j) {
                        ListNode* left = getNodeAt(head, i);  // Get the node at index i
                        ListNode* right = getNodeAt(head, j); // Get the node at index j
                        if(left->val != right->val) return false;
                        i++;
                        j--;
                    }
                    return true;
    }
-------------------------------------------------------------------------->
    Methode 02 -
    create a deep copy of linked list
    and do it reverse 
    now compare both linked list 

    class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* Next = head;
        while(curr){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* c = new ListNode(10); // farzi Node
        // Deep copy of nhead;
        ListNode* temp = head;
        ListNode* tempC = c;
        while(temp){
            ListNode* node = new ListNode(temp->val);
            tempC->next = node;
            temp = temp->next;
            tempC = tempC->next;
        }
        c = c->next;
        c = reverseList(c);
        ListNode* a = head;
        ListNode* b = c;
        while(a){
            if(a->val != b->val) return false;
            a = a->next;
            b = b->next;
        }
        return true;
    }

-------------------------------------------------------------------------------->

        MEthode - 03 time complexity O(n)

        #Hint - if the first & second values of Linked List are equal of each other ---> true;

        --> find the left middle and  right middle 
        --> aadhi linked list ko reverse kro
        --> now first half of linked list and second half which is noe reversed compare
        --> if same values -> return true


        class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* Next = head;
        while(curr){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        // Find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
    }
    // Reverse the second half of the list
    ListNode* newHead = reverseList(slow->next);
    ListNode* a = head;
    ListNode* b = newHead;
    // Compare the two halves
    while (b) {
        if (a->val != b->val) return false;
        a = a->next;
        b = b->next;
    }

    return true;
}

};
};
};
*/