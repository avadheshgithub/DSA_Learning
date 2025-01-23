/*
        ## Diameter of Binary tree       [Leetcode 543]


        Diameter - num of edges between longest path

                    Ex
                     
                     (1)
                    /   \
                (2)       (3)
                /  \        \
            (4)     (5)       (6)
                   /
                (7)

            so longest path = 7->5->2->1->3->6

                    ans - nu of edges = 5

    ------------------------------------------------------------------------

    #- Approach 01 (not always work where its does not pass through root node)
             
            Diameter (longest path b/w any two nodes)
             = num of level in LST  + levels in RST

    # - Approach 02 (visit each node && store it and return max)

            1.at each node calculate - level in LST  + levels in RST
            2. use max 
            3. return maximum value

*/ 

//-----------------------------APPROACH 01 (Failed) -----------------------
/*class Solution {
public:
    int levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1+ max(levels(root->left),levels(root->right));
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        return levels(root->left) + levels(root->right);
    }
};*/



//------------------------------APPROACH 02 (CoRRECT)--------------------------
/*class Solution {
public:
    int maxDia = 0; // gloabal variable
    int levels(TreeNode* root){ // to calculate the level
        if(root==NULL) return 0;
        return 1+ max(levels(root->left),levels(root->right));
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int dia = levels(root->left) + levels(root->right);
        maxDia = max(maxDia,dia);
        // for each node calculate levels
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return maxDia;
    }
};*/


//----------------------------APPROACH SAME------------------------------
/*class Solution {
public:
    int maxDia = 0; // gloabal variable

    int helper(TreeNode* root){
        if(root==NULL) return 0;
        int dia = levels(root->left) + levels(root->right);
        maxDia = max(maxDia,dia);
        // for each node calculate levels
        helper(root->left);
        helper(root->right);
        return maxDia;
    }

    int levels(TreeNode* root){ // to calculate the level
        if(root==NULL) return 0;
        return 1+ max(levels(root->left),levels(root->right));
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia = 0; // reintialize
        return helper(root);
       
    }
};*/


//-----------------------AVOID GLOBAL VARIABLE------------------------------
/*class Solution {
public:
    // avoid global variable

    int levels(TreeNode* root){ // to calculate the level
        if(root==NULL) return 0;
        return 1+ max(levels(root->left),levels(root->right));
    }

    void helper(TreeNode* root,int &maxDia){
        if(root==NULL) return;
        int dia = levels(root->left) + levels(root->right);
        maxDia = max(maxDia,dia);
        // for each node calculate levels
        helper(root->left,maxDia);
        helper(root->right,maxDia);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia = 0; 
        helper(root,maxDia);
        return maxDia;
       
    }
};*/


//------------------------------------------------------------------------
/*## Diameter of Binary tree  (O(n))     [Leetcode 543]


        Diameter - num of edges between longest path

                    Ex
                     
                     (1)
                    /   \
                (2)       (3)
                /  \        \
            (4)     (5)       (6)
                   /
                (7)

            so longest path = 7->5->2->1->3->6

                    ans - nu of edges = 5
                    

class Solution {
public:
    int ans =0;
    int diameter(TreeNode* root){ // O(n) (Bottom up traverse)
        if(!root) return 0;
        int leftAns = diameter(root->left);
        int rightAns = diameter(root->right);
        
        ans = max(ans,leftAns+rightAns+1);
        return max(rightAns,leftAns) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        diameter(root);
        return ans-1;
    }
};
*/