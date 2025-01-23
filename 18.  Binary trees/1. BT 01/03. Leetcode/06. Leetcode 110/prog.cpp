/*
        ## Balanced Binary tree    [Leetcode 110]

        Note :-
        A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.
*/


/*class Solution {
public:
    int height(TreeNode *root){ // calculate height 
        if(!root) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        if(abs(leftHeight-rightHeight)>1) return false;

        bool leftAns = isBalanced(root->left); // checkking for LST
        if(!leftAns) return false;

        bool rightAns = isBalanced(root->right);// checkking for RST
        if(!rightAns) return false;

        return true;
    }
};*/