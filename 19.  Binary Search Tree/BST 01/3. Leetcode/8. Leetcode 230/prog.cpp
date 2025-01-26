/*
        ## Kth Smallest ELement in a BST    [Leetcode 230]
*/

//--------------------------METHODE 01 ----------------------------------
/*class Solution {
public:
    void inorder(TreeNode* root,vector<int>&ans){
        if(root==NULL) return; 
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        inorder(root,ans); // Inorder traverser --> assending Order
        return ans[k-1];
    }
};*/


//-----------------------------METHODE 02 -------------------------------------
/*class Solution {
public:
    void kth(TreeNode* root,int& k,int& ans){
        if(!root) return;
        kth(root->left,k,ans);
        if(--k==0) {     //decrease k by 1 each times
            ans = root->val;
            return;
        }
        kth(root->right,k,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans = -1;
        kth(root,k,ans);
        return ans;
    }
};*/