/*
        ## Range Sum of BST       [Leetcode 938]


        #- Description - Given the root node of a binary search tree and two integers low and high, return the sum of values of all node with a values in the inclusivr range [low,high]
*/


/*class Solution {
public:
    void sumBST(TreeNode* root, int low,int high,int& sum){
        if(!root) return ;
        sumBST(root->left,low,high,sum);
        if(root->val>=low && root->val <= high){
            sum+=root->val;
        }
        sumBST(root->right,low,high,sum);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        sumBST(root,low,high,sum);
        return sum;
    }
};*/