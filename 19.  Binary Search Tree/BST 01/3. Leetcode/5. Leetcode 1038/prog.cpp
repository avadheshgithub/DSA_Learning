/*
        ##  Binary Search Tree to Greater Sum Tree      [Leetcode 1038]

        Hint-


            Reverse inorder (right to left) Traverse & 

                Node->val = Node->val + its Greater Node->val sum

                sum = 0 , continous updation
*/


/*class Solution {
public:
    int sum = 0;
    void reverseInorder(TreeNode* root){
        // right root left (Reverse Inorder)
        if(root==NULL) return;
        reverseInorder(root->right);
        root->val +=sum; // kaam
        sum = root->val;
        reverseInorder(root->left);
    }

    TreeNode* bstToGst(TreeNode* root) {
        reverseInorder(root);
        return root;
    }
};*/