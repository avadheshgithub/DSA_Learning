/*
        ## BST - PreOrder Traversal

    # DFS 
        class Solution {
        public:
            void inorder(TreeNode* root,vector<int>&ans){
                if(root==NULL) return;
                ans.push_back(root->val);
                inorder(root->left,ans);
                inorder(root->right,ans);
            }

            bool isValidBST(TreeNode* root) {
                vector<int>ans;
                inorder(root,ans); 
                return ans;
            }
        };


    # BFS

        class Solution {
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
        };
*/