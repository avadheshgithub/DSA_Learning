/*

    ## Merge K Sorted List        [Leetcode 23]


## Methode 01

    (1)-(4)--(5)    ------------(1) ------
                                            Merge
    (1)-(3)--(4)    ------------(2)-------

    Result-------------------------------
                                            Merge
    (2)-(6)         -------------------(3)




    Time complexity - k list and n elements --> Total ELement K*n

    1th     2nd    3rd   4th ------     k-1th    kth
    2n     3n       4n    5n  -----     (k-1)n    kn

    total num of operations = n*(k(k+1)/2)-n
                            = o(nK^2)  bad complexity
*/

/*class Solution {
public:
    ListNode* merge(ListNode* a, ListNode* b) {
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

    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size()==0) return NULL;
        while(arr.size()>1){
            ListNode* a = arr[arr.size()-1];
            arr.pop_back();
            ListNode* b = arr[arr.size()-1];
            arr.pop_back();
            ListNode* C = merge(a,b);
            arr.push_back(C);
        }
        return arr[0];
    }
};*/


/*          MEthode 2   (Use Merge Sort ALgo)       */

/*

1   2     3    4     5    6    7    8   (k=8)
----      ------     ------    ------
merge     merge      merge      merge

-------------        -----------------
    merge                merge

#
time complexiity  -       O(nklogk)                        8n + 8n + 8n = 24n
-----     -------    ------     ------
  2n        2n        2n          2n

  -------------       ----------------
    4n                   4n

  -------------------------------------
                 8n


class Solution {
public:
    ListNode* merge(ListNode* a, ListNode* b) {
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

    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size()==0) return NULL;
        while(arr.size()>1){
            ListNode* a = arr[0];
            arr.erase(arr.begin());    // Pop from the Front
            ListNode* b = arr[0];
            arr.erase(arr.begin());
            ListNode* C = merge(a,b);
            arr.push_back(C);
        }
        return arr[0];
    }
};
*/