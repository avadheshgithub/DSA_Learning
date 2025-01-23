/*
        ## Path sum     {Leetcode 112}

        check it is exiest any path that nodes val sum is equal to target val

        return true/false

            # target = 7
         
                               9
                               (1)  ----------lEVEL 1  
                               /   \
                         8   (3)  (4) 8-------lEVEL 2
                             / \    / \
                           (4) (5) (6) (7) -----lEVEL 3
                        5       5   4   1

            ## at each level tagret valu is subtacted by its node valu 
            and if there is leaf node that its vaalues is == tagrte value 
            then retun true;
*/

//-----------------------------------------------------------------------


/*class Solution {
public:
    bool helper(TreeNode* root,int sum) {
        if (root == NULL) return false;
        if (root->left == NULL && root->right == NULL) { 
            return root->val==sum;
        }
        return helper(root->left,sum-(root->val)) || helper(root->right,sum-(root->val));
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root,targetSum);
    }
};*/


//------------------------------------------------------------------------------

/*class Solution {
public:
    bool helper(TreeNode* root,int sum) {
        if (root == NULL) return false;
        if (root->left == NULL && root->right == NULL) { 
            return (root->val==sum);
        }
        bool leftAns = helper(root->left,sum-(root->val));
        bool rightAns = helper(root->right,sum-(root->val));
        
        return(leftAns || rightAns);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root,targetSum);
    }
};*/