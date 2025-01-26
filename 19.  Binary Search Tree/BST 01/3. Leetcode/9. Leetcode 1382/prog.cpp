/*
        ## Balance a binary search tree    [Leetcode 1382]


        Description - Given the root of a binary search tree , return a balanced BST with the same node values

        SC = O(n)
        TC = O(n)
*/

//--------------------------------METHODE 01-------------------------
/*class Solution {
public:
    void inorder(TreeNode* root,vector<int>&ans){
        if(root==NULL) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    TreeNode* helper(vector<int>& arr , int low,int high){
        if(low>high) return NULL;
        int mid = low + (high-low)/2;
        TreeNode* root = new TreeNode(arr[mid]);
        root->left = helper(arr,low,mid-1);
        root->right = helper(arr,mid+1,high);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);

        int n = ans.size();
        return helper(ans,0,n-1);
    }
};*/