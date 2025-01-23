/*
    ## COnstruct Binary tree from preOrder & inOrder traversal  [Leetcode 105]

        1. only by given 1 inorder ---> multiple tree possible
        2. only by given 1 preOrder --> multiple tree possible

        but 1 inorder & 1 preOrder ---> unique tree

        Ex 01    
                    Rt L T
            ----------------
                pre: 1 2 3
                in : 2 1 3
            ------------------
                     L Rt R

                Colclusion - 1 root node from (pre:)
                             2 is left node from (in:)
                             3 is right node from (in:)


        ## Ex 02   

                    rt 
            ------------------------
                    rt  lst  rst
                     - ----  ---
                pre: 1 2 4 5 3 6
                in : 4 2 5 1 3 6
                     ----- -  ---
                     lst   rt  rst
            ------------------------
        #idx               i
               right<------rt --->left


                conclusion - 2 4 5 (left substree)
                            - 3,6 (right subtree)

        now continious recusrsion on remaining part

*/



/*class Solution {
public:
    TreeNode* build(vector<int>& pre,int prelow,int prehigh, vector<int>& in,int inlow,int inhigh){
        if(prelow>prehigh) return NULL;
        TreeNode* root = new TreeNode (pre[prelow]);
        if(prelow==prehigh) return root;
        int i = inlow;
        while(i<=inhigh){
            if(in[i]==pre[prelow]) break;
            i++;
        }
        int leftCount = i-inlow;
        int rightCount = inhigh-i;
        root->left = build( pre, prelow+1, prelow+leftCount, in, inlow, i-1); // LST
        root->right = build( pre, prelow+leftCount+1, prehigh, in,i+1, inhigh); // RST
        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n = pre.size();
        return build(pre,0,n-1,in,0,n-1);
    }
};*/




/*class Solution {
public:
    int index = 0; 
    TreeNode* build(vector<int>& in, vector<int>& pre, int s, int e) {
        if (s > e || index >= pre.size()) return NULL;
        TreeNode* root = new TreeNode(pre[index]);
        index++;
        if (s == e) return root; // Leaf node
        int newIndex = 0;
        for (int i = s; i <= e; i++) {
            if (in[i] == root->val) {
                newIndex = i;
                break;
            }
        }
        root->left = build(in, pre, s, newIndex - 1);
        root->right = build(in, pre, newIndex + 1, e);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        index = 0; // Initialize the global index
        return build(inorder, preorder, 0, inorder.size() - 1);
    }
};
*/