
/*

    ## Find the minimum and Maximum Number of Nodes between Critical Points  [Leetcode 2058]

    maxima --- its greater than its left side & right Side elements
    Minima -- its smaller thans its left and right side values

    #Ex;

        5----3----1----2---5---1----2
        t   tn   tnn
        so Ans [1,3]

        critical points are [1,3] - because eeither they are minima or Maxima
*/


/*class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int idx = 1;
        int firstIdx = -1;
        int lastIdx = -1;
        ListNode* a = head;
        ListNode* b = head->next;
        ListNode* c = head->next->next;
        int mind = INT_MAX;
        int f = -1;
        int s =  -1;
        if(c==NULL) return{-1,-1};
        while(c){
            if(b->val>a->val && b->val>c->val ||  b->val<a->val && b->val<c->val){
                // For max distance
                if(firstIdx==-1) firstIdx = idx;
                else lastIdx = idx;
                // for minimum distance
                f = s;
                s = idx;
                if(f!=-1){
                    int d = s-f;
                    mind = min(mind,d);
                }
            }
            a = a->next;
            b = b->next;
            c = c->next;
            idx++;
        }
        if(lastIdx==-1) return {-1,-1};
        int maxd = lastIdx-firstIdx;       // Maximum Distance
        return{mind,maxd};
    }
};*/