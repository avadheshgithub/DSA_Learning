/*
        ## Invert the Binary tree           [Leetcode 226]

        hint -  
                for each node

                swap (left subtree, right subtree)
*/

/*class Solution {
public:
    void helper(TreeNode* root){
        if(root==NULL) return; 
        TreeNode* temp  = root->left;
        root->left = root->right; // swapping 
        root->right = temp;
        helper(root->left); // recursion for each node
        helper(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        helper(root);
        return root;
    }
};
*/

//---------------------------2nd Way----------------------------
/*class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
         if(root==NULL) return NULL; 
        TreeNode* temp  = root->left;
        root->left = root->right; // swapping 
        root->right = temp;
        invertTree(root->left); // recursion for each node
       invertTree(root->right);
        return root;
    }
};*/