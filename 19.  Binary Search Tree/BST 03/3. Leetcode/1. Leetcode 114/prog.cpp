/*
     ## Flatten Binary Tree of linked List         [Leetcode 114]

        Note -
            The "linked list" should use the same TreeNode class where the right child pointer points to the next node in the list and the left child pointer is always null.

            The "linked list" should be in the same order as a pre-order traversal of the binary tree.
 
*/

//----------------------------METHODE 01------------------------------------

/*
class Solution {
public:
    vector<TreeNode*> preorderTraversal(TreeNode* root) {
        vector<TreeNode*> ans;
        stack<TreeNode*> st;
        if (root != NULL) st.push(root);
        while (st.size()>0) {
            TreeNode* temp = st.top();
            st.pop();
            ans.push_back(temp);
            if (temp->right!=NULL) st.push(temp->right);
            if (temp->left!=NULL) st.push(temp->left);
        }
        return ans;
    }
    void flatten(TreeNode* root) {
       vector<TreeNode*>ans = preorderTraversal(root);
       int n = ans.size();
       for(int i=0;i<n-1;i++){
            ans[i]->right = ans[i+1];
            ans[i]->left = NULL;
       }
    }
};*/


//----------------------------------METHIDE 02-----------------------------
/*class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        TreeNode* l = root->left; // lST
        TreeNode* r = root->right; //RST
        root->left = NULL; // break LST
        root->right = NULL; // break RST
        flatten(l);
        flatten(r);
        root->right = l; // making link
        TreeNode* temp = root;
        while(temp->right!=NULL) temp = temp->right;
        temp->right = r;
    }
};

#                            OR


class Solution {
public:
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        flatten(root->left);
        flatten( root->right);
        TreeNode* r = root->right;
        root->right = root->left;
        root->left = NULL;
        TreeNode* temp = root;
        while(temp->right!=NULL) temp = temp->right;
        temp->right = r;
    }
};
*/


//----------------------------------METHODE 03 ---------------------------------

/*class Solution {
public:
    void flatten(TreeNode* root) {
        // Using Morris Traversals
        if(root==NULL) return;
        TreeNode* curr = root;
        while(curr!=NULL){
            if(curr->left!=NULL){
                // save the right
                TreeNode* r = curr->right;
                curr->right = curr->left;
                // finding pred
                TreeNode* pred = curr->left;
                while(pred->right!=NULL) pred = pred->right;
                //link
                pred->right = r;
                curr = curr->left;
            }
            else curr = curr->right;
        }
        //making all nodes->left = NULL
        TreeNode* temp = root;
        while(temp->right!=NULL){
            temp->left = NULL;
            temp= temp->right;
        }
    }
};*/  