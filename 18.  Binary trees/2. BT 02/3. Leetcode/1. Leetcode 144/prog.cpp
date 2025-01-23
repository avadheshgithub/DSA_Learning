/*
        ## Binary tree preorder Traversal        [Leetcode 144]

        ## Time Complexity - O(n) 
        ## Space Complexity- O(h) 

                worst/Avg case - O(n)
                best case - O(logn)
*/



/*class Solution {
public:
    void preOrder(TreeNode* root,vector<int>& ans){  // pre order
        if(root==NULL) return;
        ans.push_back(root->val); //root
        preOrder(root->left,ans); // left
        preOrder(root->right,ans); // right
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        preOrder(root,ans);
        return ans;
    }
};*/



//--------------------------------ITERATIVE METHODE----------------------------
/*class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        if (root != NULL) st.push(root);
        while (st.size()>0) {
            TreeNode* temp = st.top();
            st.pop();
            ans.push_back(temp->val);
            if (temp->right!=NULL) st.push(temp->right);
            if (temp->left!=NULL) st.push(temp->left);
        }
        return ans;
    }
};*/