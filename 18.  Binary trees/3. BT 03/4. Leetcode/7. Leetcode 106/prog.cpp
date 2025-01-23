/*
    ## Construct binary tree from inrder & postorder Traversal   [Leetcode 106]

     ## Ex 01   

                    rt 
            ------------------------
                    rt  lst  rst
                     - ----  ---
                in: 1 2 4 5 3 6
                post : 4 2 5 1 3 6
                     ----- -  ---
                     lst    rst  rt
            ------------------------
        #idx               i
               right<------rt --->left

        now continious recusrsion on remaining part
*/



/*class Solution {
public:
    int index = 0;
    TreeNode* build(vector<int>&in,vector<int>&post,int s,int e){
        if(s>e || index<0) return NULL;

        TreeNode* root = new TreeNode(post[index]);
        index--;

        int newIndex=0;
        if(s==e) return root;
        for(int i=s;i<=e;i++){
            if(in[i]==root->val){
                newIndex = i;
                break;
            }
        }
        root->right = build(in,post,newIndex+1,e);
        root->left = build(in,post,s,newIndex-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        index = n-1;
        return build(inorder,postorder,0,n-1);
    }
};*/




/*class Solution {
public:
    TreeNode* build(vector<int>& in, int inlow, int inhigh, vector<int>& post, int postlow, int posthigh) {
        if (postlow > posthigh || inlow > inhigh) return NULL;
        TreeNode* root = new TreeNode(post[posthigh]);
        int i = inlow;  // Find the index of the root in inorder traversal
        while (i <= inhigh && in[i] != post[posthigh]) {
            i++;
        }
        int leftCount = i - inlow; // Number of nodes in the left subtree
        int rightCount = inhigh - i; // Number of nodes in the right subtree
        
        // Recursively construct the left and right subtrees
        root->left = build(in, inlow, i - 1, post, postlow, postlow + leftCount - 1); // Left Subtree
        root->right = build(in, i + 1, inhigh, post, postlow + leftCount, posthigh - 1); // Right Subtree
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        int n = post.size();
        return build(in, 0, n - 1, post, 0, n - 1);
    }
};*/