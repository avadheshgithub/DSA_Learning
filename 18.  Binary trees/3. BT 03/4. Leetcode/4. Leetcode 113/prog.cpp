/*
        ## Path sum II     [Leetcode 113]

        return all pth root to leaf that sum is equal to target sum 

                # target = 7
         
                            7,{}
                               (1)  ----------lEVEL 1  
                               /   \
                     5,{1 }  (2)   (3) 4,{1} -------lEVEL 2
                             / \    / \
                          (4) (5) (6) (7) -----lEVEL 3

                1,{1,2,5}   0,{1,2,5}  --2,{1,3,6}    -3,{1,3,7}

                at each levell targetSum=  targetSum-Nodevalue  && node value push into vector
                
                ## return that vector where its leaf node value is equal to tagret
*/



/*class Solution {
public:
    void helper(TreeNode* root,vector<int> v,vector<vector<int>>& ans,int sum) {
        if (root == NULL) return;
        if (root->left == NULL && root->right == NULL) { 
            if(root->val==sum){
                v.push_back(root->val);
                ans.push_back(v);
            }
            return;
        }
        v.push_back(root->val);
        helper(root->left,v,ans,sum-(root->val));
        helper(root->right,v,ans,sum-(root->val));
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>v;
        helper(root,v,ans,targetSum);
        return ans;
    }
};*/