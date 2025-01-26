/*
        ## Trim a binary search Tree          [Leetcode 669]


        # Given - 
                1. LST < low  (its left LST eliminated)
                2. high > high (its right RST eliminated)

        # Code -
                while(root->left!=NULL){
                        if(root->left->val < low) {
                                root->left = root->left->right;
                        }
                        else if (root->left->val > high) {
                                root->left = root->left->left;
                        }
                        else break;
                }

                while(root->right!=NULL){
                        if(root->right->val > high) {
                                root->right = root->right->left;
                        }
                        else if (root->right->val < low){
                                root->right = root->right->right;
                        }
                        else break;
                }

                and recursive for again check left & right node
                and to handle root node --> make dummy node and connect it
                
*/


/*class Solution {
public:
    void trim(TreeNode* root, int low, int high){
        if(root==NULL) return;
        while(root->left!=NULL){
            if(root->left->val < low) root->left = root->left->right;
            else if (root->left->val > high) root->left = root->left->left;
            else break;
        }
        while(root->right!=NULL){
            if(root->right->val > high) root->right = root->right->left;
            else if (root->right->val < low) root->right = root->right->right;
            else break;
        }
        trim(root->left,low,high); // recursive to handle other root->left & right nodes
        trim(root->right,low,high);
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        TreeNode* dummy = new TreeNode(INT_MAX); // to handle root node;
        dummy->left = root;
        trim(dummy,low,high);
        return dummy->left;
    }
};*/