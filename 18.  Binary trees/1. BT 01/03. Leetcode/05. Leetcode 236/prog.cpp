/*
        ## Lowest Common Ancestor of a binary tee (LCA)      [Leetcode 236]

        hint 01
                if a in LST & b in RST then root would be the lowest common Ancestor
*/

//------------------------------LOGIC 01 --------------------------------------

/*class Solution {
public:
    bool exiests(TreeNode* root, TreeNode* target) { 
        // Finding if target node exists in the subtree
        if (root == NULL) return false;
        if (root == target) return true;
        return exiests(root->left, target) || exiests(root->right, target);
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL || root == p || root == q) return root;
        else if (exiests(root->left, p) && exiests(root->right, q)) return root; // p in LST && q in RST --> root
        else if (exiests(root->right, p) && exiests(root->left, q)) return root;//p in RST && q in LST --> root
        else if (exiests(root->left, p) && exiests(root->left, q)) return lowestCommonAncestor(root->left, p, q); // p && q both in LST--> left call
        else return lowestCommonAncestor(root->right, p, q); // P && q both in RST --> right call
    }
};
*/


//-------------------------LOGIC 02 -----------------------------------------
/*class Solution {
public:
    bool exiests(TreeNode* root, TreeNode* target) { // Finding if target node exists in the subtree
        if (root == NULL) return false;
        if (root == target) return true;
        return exiests(root->left, target) || exiests(root->right, target);
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (exiests(root->left, p) && exiests(root->left, q)) return lowestCommonAncestor(root->left, p, q); // p && q both in LST--> left call
        else if (exiests(root->right, p) && exiests(root->right, q)) return lowestCommonAncestor(root->right, p, q);// P && q both in RST --> right call
        return root;
    }
};
*/