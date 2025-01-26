/*
        ## Delete node in a BST      [LEETCODE 450]
*/


/*class Solution {
public:
    TreeNode* IOP(TreeNode* root){ // inOrder Predecessor
        TreeNode* pred = root->left;
        while(pred->right!=NULL){
            pred = pred->right;
        }
        return pred;
    }

    TreeNode* IOS(TreeNode* root){ // inOrder successor
        TreeNode* suc = root->right;
        while(suc->left!=NULL){
            suc = suc->left;
        }
        return suc;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val==key){
            //Case 1: no child
            if(root->left==NULL && root->right==NULL) return NULL;
            // Case 2 : one child
            if(root->left==NULL || root->right==NULL){
                if(root->left!=NULL) return root->left;
                else return root->right;
            }
            //Case 3 : two child
            if(root->left!=NULL && root->right !=NULL){

                // replace the root with its inorder Precessor
                //after replacing delete its pred/suc
                TreeNode* pred = IOP(root);
                root->val = pred->val;
                root->left = deleteNode(root->left,pred->val);

                or
                
                TreeNode* suc = IOS(root);
                root->val = suc->val;
                root->right = deleteNode(root->right,suc->val);
            }
        }
        else if(root->val > key){ // go left
            root->left = deleteNode(root->left,key);
        }
        else { // root->val < key : go right
            root->right = deleteNode(root->right,key);
        }
        return root;
    }
};*/