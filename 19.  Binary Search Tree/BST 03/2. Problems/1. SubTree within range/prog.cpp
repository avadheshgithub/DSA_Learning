/*
    ## Given a BST, count subtree in it whose nodes lie within a given range

                     (40)
                     /  \
                   (25) (50)
                   /  \   /  \ 
                (20) (30)(45) (60)


        low = 15
        high = 47

        count = 4

        # hint - top down approach (O(h^2)) ---> Brute force
             - bottom down approach O(h) ----> optimized approach  

        # Code 

            1. base case
            2. recursive call
            3. operations to be performed

        # implement

            if(!root) retur true;
            bool left = f(root->left,low,high);
            bool right = f(root->right,low,high);

            if(left && right && (root->val >=low && root->val <= high)){
                count++;
                return true;
            }
            return false;

        
        # Complexity

            TC = O(n)
            SC = O(n)
*/


/*

bool countSubTree(TreeNode* root,int low, int high , int& count){
    if(!root) return true;

    bool leftCall = counsubTree(root->left,low,high,count);
    bool rightCall = counsubTree(root->right,low,high,count);

    if(leftCall && rightCall && (root->val >= low && root->val <=high)){
        count++;
        return true;
    }
    return false;
}

int main(){

    int count = 0;
    countSubtree(root,25,47,count); // 4

}
*/