/*
        ## Binary Tree post Order Traversal         [Leetcode 145]
*/


/*class Solution {
public:
    void postOrder(TreeNode* root,vector<int>& ans){  // pre order
        if(root==NULL) return;
        postOrder(root->left,ans); // left
       postOrder(root->right,ans); // right
       ans.push_back(root->val); //root
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postOrder(root,ans);
        return ans;
    }
};*/

//----------------------------ITERATIVE POSTORDER TRAVERSAL-----------------------
/*class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        if (root != NULL) st.push(root);
        while (st.size()>0) {
            TreeNode* temp = st.top();
            st.pop();
            ans.push_back(temp->val);
            if (temp->left!=NULL) st.push(temp->left);
            if (temp->right!=NULL) st.push(temp->right);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};*/