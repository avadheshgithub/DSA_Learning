/*
        ## ZigZag level Order Traversal   [Leetcode 103]

        very similar to --> Level order traversal

                                (1)  ----------lEVEL 1  
                               /   \
                             (2)   (3)  -------lEVEL 2
                             / \    / \
                           (4) (5) (6) (7) -----lEVEL 3



        ## lEVEL = 1 (odd)----> left to right
        ## lEVEL = 2 (even)----> right to left
        ## lEVEL = 3 (odd)----> left to right
        ## lEVEL = 4 (even)----> right to left

        ## Output =   (right to left)
                    1
                    3  2
                    4  5  6  7
*/

//----------------------------METHODE 01------------------
/*class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};

        queue<TreeNode*>q;
        q.push(root);

        bool level = true;
        vector<vector<int>>ans;

        while(!q.empty()){
            int size = q.size();
            vector<int>temp(size);

            for(int i=0;i<size;i++){
                TreeNode *node = q.front();
                q.pop();

                int index = level ? i: size-i-1; // ternary operator
                temp[index] = node->val;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(temp);
            level = !level; // at each level ---> true & false for odd- even
        }
        return ans;
    }
};*/



//----------------------------METHODE 02------------------
/*class Solution {
public:
    int Levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(Levels(root->left),Levels(root->right));
    }

    void nthLevelRec(TreeNode* root,int currLevel,int level,vector<int>& v){ 
        if(root==NULL) return; //base
        if(currLevel==level){
            v.push_back(root->val); // root
            return ;
        }
        nthLevelRec(root->right,currLevel+1,level,v);
        nthLevelRec(root->left,currLevel+1,level,v);

    }
    void nthLevel(TreeNode* root,int currLevel,int level,vector<int>& v){ 
        if(root==NULL) return; //base
        if(currLevel==level){
            v.push_back(root->val); // root
            return ;
        }
        nthLevel(root->left,currLevel+1,level,v);
        nthLevel(root->right,currLevel+1,level,v);

    }

    void lOrder(TreeNode* root,vector<vector<int>>& ans){
        int n = Levels(root);
        for(int i=1;i<=n;i++){
            if(i%2==0){
                vector<int>v;
                nthLevelRec(root,1,i,v);
                ans.push_back(v);
            }
            else {
                vector<int>v;
                nthLevel(root,1,i,v);
                ans.push_back(v);
            }
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        lOrder(root,ans);
        return ans;
    }
};*/