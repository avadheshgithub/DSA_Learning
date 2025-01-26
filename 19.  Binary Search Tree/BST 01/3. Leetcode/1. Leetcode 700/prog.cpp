/*
    ## Search in a Binary Search Tree      [Leetcode 700]

        TC - O(logn) Best Case (Balanced Tree)
           - O(n) worst case & avg case (Skewed Tree)

        SC - O(n) Similar to time complexity

*/


/*class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL || root->val==val) return root;
        else if(root->val > val) return searchBST(root->left,val);
        else return searchBST(root->right,val);  
    }
};*/