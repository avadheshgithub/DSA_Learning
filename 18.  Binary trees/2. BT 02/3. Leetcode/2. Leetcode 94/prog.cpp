/*
        ## Binary tree inorder traveersal    [Leetcode 94]
*/


/*class Solution {
public:
    void inOrder(TreeNode* root,vector<int>& ans){  // pre order
        if(root==NULL) return;
        inOrder(root->left,ans); // left
        ans.push_back(root->val); //root
        inOrder(root->right,ans); // right
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inOrder(root,ans);
        return ans;
    }
};*/


//--------------------------------ITERATIVE TRAVERSAL---------------------------
/*class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>st;
        TreeNode* node = root;
        while(st.size()>0 || node!=NULL){
            if(node !=NULL) {
                st.push(node);
                node = node->left;
            }
            else{
                TreeNode* temp = st.top();
                st.pop();
                ans.push_back(temp->val);
                node = temp->right;
            }
        }
        return ans;
    }
};*/