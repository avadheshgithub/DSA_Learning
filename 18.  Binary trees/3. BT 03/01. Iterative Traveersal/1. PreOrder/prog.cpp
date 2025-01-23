/*
        ## Pre-Order Traveersal  (Iterative Approach)

            Stack
                    |         |
                    |         |
                    |         |
                    |         |
                    |    1    |
                    ------------
                        st
            ## Tree

                    (1)    
                    /   \
                 (2)   (3) 
                / \    / \
                (4) (5) (6) (7) Leaf Nodes
                
        stack<Node*> st;
        vector<int>ans;
        Step 01 -> st.push(root)
        step 02 -> 
             while(st.size()>0){
                temp = st.top()
                st.pop();
                ans.push_back(temp->val)

                if(!temp->right) st.push(temp->right);
                if(!temp->left) st.push(temp->left);
            }

            ## Note - calling order ----> right node first & left node 
                        bacauce of its lifo property

                     - calling of right & left of that node that is present top in the stack first
*/



/*----------------- LEETCODE 144 (Iterative PreOrder Traversal----------------*/


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