/*
        ## Morris Traversal  = inorder Traversal


        # Pre / in / post  ---> recursive / iterative  

                1. TC = O(n)
                2. SC = O(n)

        # Moris Traversal

                1. TC = O(n)
                2. SC = O(1)

        Explanation -

                1. curr at root
                2.1 if curr->left exiest ---> find pred
                        1. link (if pred->right==NULL)
                        2. Unlink (if already linked => pred->right==curr)

                2.2 curr->left==NULL
                        1. visit(curr)
                        2. curr = curr->right;


        #Code:
                curr = root;
                while(curr!=NULL){
                        if(curr->left!=NULL){ // find predecessor
                                pred = curr->right;
                                while(pred->right!=NULL && pred->right!=Curr){
                                        pred = pred->right;
                                }
                                if(pred->right==NULL){
                                        pred->right = curr; // making Fazi link
                                        curr = curr->Left;
                                }
                                if(pred->right==curr){ // fazi link ---> unlink
                                        pred->right = NULL;
                                        visit(curr)
                                        curr = curr->right;
                                }
                        }
                        else{
                                visit(curr);
                                curr = curr->right;
                        }
                }
        
        # Diff than Recursive/iterative in space

                1. recursive - it take  call stack
                2. iterative - it take vector / queue
                3. Moris tra - it make the Farzi connection for return on prev node
*/


//-----------------------------CODE------------------------------------


/*class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        // Moris Traversal - SC --> O(1)
        vector<int>ans;
        TreeNode* curr = root;
        while(curr!=NULL){
            if(curr->left!=NULL){ // find the pred
                TreeNode* pred = curr->left;
                while(pred->right!=NULL && pred->right!=curr){
                    pred = pred->right;
                }
                if(pred->right==NULL){ // link
                    pred->right = curr;
                    curr = curr->left;
                }
                else{ // pred->right==curr : unlink
                    pred->right = NULL;
                    ans.push_back(curr->val);
                    curr = curr->right;
                }
            }
            else{ // curr->left ==NULL
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
        return ans;
    }
};*/