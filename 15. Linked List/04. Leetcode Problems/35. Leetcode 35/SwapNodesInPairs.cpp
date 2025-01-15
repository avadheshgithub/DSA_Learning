/*
        ## Swap Nodes in pairs         [Leetcode 24]

    1---2---3----4----5----6

    Swaps nodes in pair 

    2---1---4---3----6-----5      Ans



    ## Solution:- recursion

    #                    head    temp
        [-1]             1---------2--------3----------4--------5---------6------NULL



        swapPairs(Node){
            if(!head or !head->next) return head;
            listNode* temp = head->next;
            head->next = swappairs(temp->next);
            temp->next = head;
            retun temp;
        }
*/


/*class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head or !head->next) return head;
        ListNode* temp = head->next;
        head->next = swapPairs(temp->next);
        temp->next = head;
        return temp;
    }
};*/