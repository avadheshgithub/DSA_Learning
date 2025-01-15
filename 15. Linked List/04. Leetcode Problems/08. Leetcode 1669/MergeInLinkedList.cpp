/*

    ## Marge in Bteween Linked list  [Leetcode 1669]

    (1)-->(2)-->(3)-->(4)-->(5)    // List 1
                                                (a=2 index se && b= 3 index tk delete)
        (6)-->(7)-->(8)            // List 02


    # Delete ke bad merge kr do
*/

/**
 * /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };


class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr1 = list1;
        a--;
        while(a--){   // List 1 ke Starting deleted node ke 1 just before node pe curr1
            curr1 = curr1->next;
        }
        b++;
        ListNode* curr2 =list1;
        while(b--){   // list 1 ke last deleted node ke 1 bad wale node pe curr2
            curr2 = curr2->next;
        }

        ListNode* temp = list2;  // 2nd list ke last node pe temp
        while(temp->next){
            temp = temp->next;
        }
        temp->next = curr2;  // add temp ko curr2 (jha pe curr hai)
        curr1->next = list2; // curr1 ko list2 ke first Node head se

        return list1;
    }
};

*/