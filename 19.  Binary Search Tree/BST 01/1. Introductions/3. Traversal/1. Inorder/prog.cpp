/*
        ## BST - Inorder Traversal

    #DFS

        class Solution {
        public:
            void inorder(TreeNode* root,vector<int>&ans){
                if(root==NULL) return;
                inorder(root->left,ans);
                ans.push_back(root->val);
                inorder(root->right,ans);
            }

            bool isValidBST(TreeNode* root) {
                vector<int>ans;
                inorder(root,ans); // if BST --> assending order
                return ans;
            }
        };


    # BFS

        class Solution {
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
        };
*/