/*
        ## Symetric Tree     [Leetcode 101]

        Check - Mirror of each node if then true
*/


//----------------------------------DFS METHODE--------------------------------
/*class Solution {
public:
    bool isSym(TreeNode *p,TreeNode *q){
        if(!p and !q) return true;
        if(!p or !q) return false;
        if(p->val==q->val and isSym(p->left,q->right) and isSym(p->right,q->left)) return true;
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return isSym(root->left,root->right);
    }
};*/


//-------------------------------------BFS METHODE-----------------------------
/*class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;

        queue<TreeNode *>q1,q2; // BFS METHODE IS USED
        q1.push(root->left);
        q2.push(root->right);

        while(!q1.empty() and !q2.empty()){
            TreeNode *p = q1.front();
            q1.pop();

            TreeNode *q = q2.front();
            q2.pop();

            if(!p and !q) continue;
            if(!p or !q) return false;

            if(p->val != q->val) return false;
                q1.push(p->left);
                q1.push(p->right);

                q2.push(q->right);
                q2.push(q->left);
        }
        return true;
    }
};*/