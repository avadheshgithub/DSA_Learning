/*
        ## Binary Tree paths            [Leetcode 257]

            all paths  (root to  each leaf node)
*/

/*class Solution {
public:
    void helper(TreeNode* root, string s, vector<string>& ans) {
        if (root == NULL) return;
        
        string a = to_string(root->val); 
        if (root->left == NULL && root->right == NULL) { // Leaf node
            s += a; 
            ans.push_back(s); 
            return;
        }
        helper(root->left, s + a + "->", ans);
        helper(root->right, s + a + "->", ans);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans; 
        helper(root, "", ans);
        return ans;
    }
};
*/