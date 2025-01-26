/*
        ## Validate BST   [Leetcode 98]

        Description - Given a Binary Tree . check weather is it BST or not ?
*/




//-------------------------Methode 1 - BRUTE FORCE --------------------
// ---> root->val > max(LST)  && root->val < min(RST);

/*class Solution {
public:
    long long maxTree(TreeNode* root){ // Max
        if(root==NULL) return LLONG_MIN;
        return max((long long)(root->val),max(maxTree(root->left),maxTree(root->right)));
    }

    long long minTree(TreeNode* root){ // MIn
        if(root==NULL) return LLONG_MAX;
        return min((long long)(root->val),min(minTree(root->left),minTree(root->right)));
    }

    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        else if((long long)(root->val)<= maxTree(root->left)) return false;
        else if ((long long)(root->val) >= minTree(root->right)) return false;
        return isValidBST(root->left) && isValidBST(root->right);
    }
};*/



//-----------------METHODE 02 - Optimal -----------------------------------------
/*class Solution {
public:
    void inorder(TreeNode* root,vector<int>&ans){ // inorder Traversal
        if(root==NULL) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans); // after this , if BST --> assending order
        for(int i=1;i<ans.size();i++){
            if(ans[i]<=ans[i-1]) return false;
        }
        return true;
    }
};*/



//---------------------------METHODE 03 - SLight diff--------------------------
/*class Solution {
public:
    void inorder(TreeNode* root,TreeNode* &prev, bool& flag){ // inorder Traversal
        if(root==NULL) return;
        inorder(root->left,prev,flag);
        if(prev!=NULL){ // kaam---> checking the accessding 
            if(root->val <= prev->val){
                flag = false;
                return;
            }
        }
        prev = root;
        inorder(root->right,prev,flag);
    }
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = NULL;
        bool flag = true;
        inorder(root,prev,flag); 
        return flag;
    }
};*/