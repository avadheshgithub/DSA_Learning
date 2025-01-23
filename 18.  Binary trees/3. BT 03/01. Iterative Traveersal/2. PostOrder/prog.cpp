/*
         ## Post Order Traversal  (Iterative Traversal)

            # Stack - 
                    |         |      |         |
                    |         |      |         |
                    |         |      |         |
                    |         |      |         |
                    |    1    |      |         |
                    ------------     ----------
                        st                helper

                ##---> we can use ans vector instead of helper stack

                    helper -> used to store the postOrder but for final ans i will have to reverse ans vector
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

                if(!temp->left) st.push(temp->left);
                if(!temp->right) st.push(temp->right);
            }

            ## Note - calling order ----> right node first & left node 
                    - bacauce of its lifo property

                    - calling of right & left of that node that is present top in the stack first
*/



//----------------------------------------------------------------------------

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