/*
    ## Construct binary tree from preorder and postorder Traversal  [Leetcode 889]

        preorder = root left right
        postOrder = left right root

        #                rt  lst
             preorder = [1,  2,  4,  5,  3,  6,  7], 
             postorder = [4,  5,  2,  6,  7,  3,  1]
        #                 ---------   ----------  --
        .                    lst            rst    rt

                1. find first index after root in preorder
                2. same find in postOrder where it find its left part--> lST
                    & right part except last would be ---> RST

*/



/*class Solution {
public:
    int index = 0;
    TreeNode* build(vector<int>&pre,vector<int>&post,int s,int e){
        if(s>e || index>pre.size()-1) return NULL;
        TreeNode* root = new TreeNode(pre[index]);
        index++;
        if(s==e) return root; // leaf node
        int newIndex = 0;
        for(int i=s;i<=e;i++){
            if(post[i]==pre[index]){
                newIndex = i;
                break;
            }
        }
        root->left = build(pre,post,s,newIndex);
        root->right = build(pre,post,newIndex+1,e-1);
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int n = preorder.size();
        int index=0;
        return build(preorder,postorder,0,n-1);
    }
};*/