/*
        ## Binary tree level order traversal        [Leetcode 102]
*/

// --------------------------- SOl 01 -------------------------------------

/*class Solution {
public:
    int Levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(Levels(root->left),Levels(root->right));
    }

    void nthLevel(TreeNode* root,int currLevel,int level,vector<int>& v){ // left to right
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
            vector<int>v;
            nthLevel(root,1,i,v);
            ans.push_back(v);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        lOrder(root,ans);
        return ans;
    }
};*/



//--------------------------SOL 02-----------------------------------------

/*class Solution {
public:
    int Levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(Levels(root->left),Levels(root->right));
    }

    void lOrder(TreeNode* root,vector<vector<int>>& ans,int levels){
        if(root==NULL) return;
        ans[levels].push_back(root->val);
        lOrder(root->left,ans,levels+1);
        lOrder(root->right,ans,levels+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n = Levels(root);
        vector<vector<int>>ans;
        for(int i=1;i<=n;i++){
            vector<int>v;
            ans.push_back(v);
        }
        lOrder(root,ans,0);
        return ans;
    }
};*/

//-----------------------------------------------------------------------------

/*
        ## Level Order Traversal (Using Queue)     [Leetcode 102]

                                (1)  ----------lEVEL 1  
                               /   \
                             (2)   (3)  -------lEVEL 2
                             / \    / \
                           (4) (5) (6) (7) -----lEVEL 3

        ## lEVEL = 1,2,3

        ## Output =   (Left to right)
                    1
                    2  3
                    4  5  6  7


----------------------------------------------------------------------------------

        ##Code -            TC = O(n)   && SC = O(2^h + 2^h-1) = O(2^h)

        Queue<TreeNode* root>q;
        vector<vector<int>>ans;

        q.psuh(root)
        while(!q.empty()){

            int size = q.size();
            vector<int>temp(size);

            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                temp[i] = node->val;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

            }
            ans.push_back(temp);

        }
*/

//-------------------------------LEETCODE-------------------------------------
/*class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};

        queue<TreeNode *>q;
        vector<vector<int>>ans;

        q.push(root);
        while(!q.empty()){

            int size = q.size();
            vector<int>temp(size);

            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                temp[i] = node->val;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};*/