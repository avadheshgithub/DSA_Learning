/*
        ## Insert Into a BST       [Leetcode 701]

*/


/*class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL) return new TreeNode(val);
        else if(root->val > val){ // go left
            if(root->left == NULL){ // attach it here
                root->left = new TreeNode(val);
            }
            else insertIntoBST(root->left,val);
        }
        else{ // root->val < val : go right
            if(root->right == NULL){ // attach it here
                root->right = new TreeNode(val);
            }
            else insertIntoBST(root->right,val);
        }
        
        return root;
    }
};*/



/*class Solution {
public:
    void insert(TreeNode* root,int val){
        if(root==NULL) root =  new TreeNode(val);
        else if(root->val > val){ // go left
            if(root->left == NULL){ // attach it here
                root->left = new TreeNode(val);
            }
            else insert(root->left,val);
        }
        else{ // root->val < val : go right
            if(root->right == NULL){ // attach it here
                root->right = new TreeNode(val);
            }
            else insert(root->right,val);
        }
    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {
        insert(root,val);
        if(root==NULL) root = new TreeNode(val);
        return root;
    }
};*/