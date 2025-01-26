/*
    ## how to delete a node from a BST   (but Maintain BST)


        # Deletion Case (Node has)

            1. Leaf Node -

            2. One child -

            3. two child - replace inorder Predecessor / successor


    # 1. Leaf Node

        TreeNode* deleteNode(TreeNode* root, int key){
            if(root==NULL) return NULL:
            if(root->val==key) return NULL;
            else if(root->val > key){ //-----> go left
                root->left = deletNode(root->left,key);
            }
            else{ //-----> go right
                root->right = deleteNode(root->right,key);
            }
            return root;
        }


    ## 2. One child

        TreeNode* deleteNode (TreeNode* root,int key){
            if(root==NULL) return NULL:
            if(root->val == key) {
                if(root->left!=NULL) return root->left;
                else return root->right;
            }
            else if(root->val > key){
                root->left = deletNode(root->left,key);
            }
            else{
                root->right = deleteNode(root->right,key);
            }
            return root;
        }


    ## 3. Two child 

        TreeNode* IOP(TreeNode* root){
            TreeNode* pred = root->left;
            while(pred->right!=NULL){
                pred = pred->right;
            }
            return pred;
        }

        TreeNode* IOS(TreeNode* root){
            TreeNode* suc = root->right;
            while(suc->left!=NULL){
                suc = suc->left;
            }
            return suc;
        }

        TreeNode* deleteNode (TreeNode* root,int key){
            if(root==NULL) return NULL:
            if(root->val == key){
                // replace the root with its inorder pred/suc
                // after replacing delete the pred/suc

                TreeNode* pred = IOP(root);
                root->val = pred->val;
                root->left = deleteNode(root->left,pred->val);
            }
        }
*/


//----------------------------FINAL CODE ----------------------------
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
                // replace the root with its inorder Precessor / Successor
                //after replacing delete its pred/suc
                TreeNode* pred = IOP(root);
                root->val = pred->val;
                root->left = deleteNode(root->left,pred->val);
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