/*
            ## Inorder Traversal  (Iterative)


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
        TreeNode* Node = root
        Step 01 -> st.push(Node)
        step 02 -> 
             while(st.size()>0 || Node!=NULL){
                if(Node !=NULL) {
                    st.push(Node);
                    Node = Node->left;
                }
                else{
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->val);
                    Node = temp->right;
                }
            }
*/

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