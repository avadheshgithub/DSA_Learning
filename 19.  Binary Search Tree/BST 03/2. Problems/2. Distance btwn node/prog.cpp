/*
    ## Given a BST and two keys in it. find the distamce between two nodes with gievn two keys . it may be assumed that both key exiest in BST

                     (40)
                     /  \
                   (25) (50)
                   /  \   /  \ 
                (20) (30)(45) (60)    


        # key 1  && key 2

        # Cases 

            1. both the key may be lying on the left subtree
            2. both key may be lying on the right subtree
            3. one key may be in lST and another key may be in RST and its vice versa

        ## Compelixity

            TC = O(n)
            SC = O(n)

*/


/*

int rootToNode(Treenode* root, int k){
    if(!root) return 0;
    if(root->val ==k) return 0;
    if(root->val > k) return 1 + rootToNode(root->left,k);
    else return 1 + rootToNode(root->right,k);
}

int distance(TreeNode* root, int k1,int int k2){
    if(!root) return 0;
    if(root->val > k1 and root->val > k2) reutrn distance(rot->left,k1,k2);
    if(root->val < k1 and root->val < k2) return distance(root->right,k1,k2);
    if(root->val >= k1 and root->val <= k2) return rootToNode(root,k1) + rootToNode(root,k2);
}

int main(){
    int k1 = 45;
    int k2 = 40;

    if(k2>k1) swap(k1,k2);
    
    distance(root,k1,k2);
    return ;0
}

*/