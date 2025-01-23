/*
        ## Path Sum III         [Leetcode 437]

        return num of paths that sum is equal to target sum 

        but --> The path does not need to start or end at the root or a leaf, but it must go downwards (i.e., traveling only from parent nodes to child nodes).

 

                # target = 7
         
                            7,{}
                               (1)  ----------lEVEL 1  
                               /   \
                     5,{1 }  (2)   (3) 4,{1} -------lEVEL 2
                             / \    / \
                          (4) (5) (6) (7) -----lEVEL 3

                1,{1,2,5}   0,{1,2,5}  --2,{1,3,6}    -3,{1,3,7}

                at each level targetSum=  targetSum-Nodevalue  && node value count++
*/



/*class Solution {
public:
    void helper(TreeNode* root,long long sum,int& count) {
        if (root == NULL) return;
        if((long long)root->val==sum) { // root val long long for comparison with sum
            count++;
        }
        helper(root->left,sum-(long long)(root->val),count);
        helper(root->right,sum-(long long)(root->val),count);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return 0;
        int count=0;
        helper(root,(long long)targetSum,count); // for every node, call helper function
        count +=pathSum(root->left,targetSum) + pathSum(root->right,targetSum);
        return count;
    }
};*/