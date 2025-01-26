/*
        ## LCA (Lowest Common Ancesstor) of a BST   [Leetcode 235]
*/


/*class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val==p->val || root->val==q->val) return root;
        else if(root->val > p->val && root->val < q->val) return root;
        else if(root->val < p->val && root->val > q->val) return root;
        else if (root->val < p->val && root->val < q->val) return lowestCommonAncestor(root->right,p,q); // both in right
        else return lowestCommonAncestor(root->left,p,q); //  both in left
    }
};*/



/*class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root->val < p->val && root->val < q->val) return lowestCommonAncestor(root->right,p,q); // both in right
        else if(root->val > p->val && root->val > q->val) return lowestCommonAncestor(root->left,p,q); //  both in left
        else return root;
    }
};*/