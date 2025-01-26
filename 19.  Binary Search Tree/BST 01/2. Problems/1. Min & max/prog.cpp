/*
    ## Find the node with minimum and maximum value in a BST 

        TC = O(n)
        SC = O(n)
*/

/*
    void minimum(Node *root){
        if(!root) return;
        if(!root->left && !root->right) return root;
        minimum(root->left);
    }
    void maximum(Node *root){
        if(!root) return;
        if(!root->left && !root->right) return root;
        maximum(root->right);
    }

*/