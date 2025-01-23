/*
        ## Same Tree   [Leetcode 100]

        compare - two trees are same or not

*/

/*class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true; // base case
        if(p==NULL && q!=NULL) return false; //base case
        if(p!=NULL && q==NULL) return false; // base case

        if(p->val != q->val) return false; // condition 01

        bool leftAns = isSameTree(p->left,q->left); // condition 02
        if(leftAns==false) return false;

        bool rightAns = isSameTree(p->right,q->right); // condition 03
        if(rightAns==false) return false;

        return true;
    }
}*/

//-------------------------SLIGHTLY CHANGED -----------------------------
/*class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true; // base case
        if(p==NULL || q==NULL) return false; //base case   //changed

        if(p->val != q->val) return false; // condition 01

        bool leftAns = isSameTree(p->left,q->left); // condition 02
        if(leftAns==false) return false;

        bool rightAns = isSameTree(p->right,q->right); // condition 03
        if(rightAns==false) return false;

        return true;
    }
};*/

