/*
      ## Binary Tree left side view   [Leetcode 199 II ]

      
                            0  (1)  ----------lEVEL 1  
                               /   \
                           1  (2)   (3)  -------lEVEL 2
                             / \    / \
                        2   (4) (5) (6) (7) -----lEVEL 3

        ## lEVEL = 1,2,3

        ## Output =   (from left view )

                  if(level==CurrLevel) then update ans[currLevel] = root->val;
                   ans = {0,0,0}
                   ans = {1,2,4}
*/


//----------------------------Appraoch 01----------------

/*class Solution {
  public:
    int Levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(Levels(root->left),Levels(root->right));
    }
    void nthLevel(TreeNode* root,int currLevel,int level,vector<int>& ans){ // left to right
        if(root==NULL) return; //base
        if(currLevel==level){
            ans[currLevel]=root->val;
            return ;
        }
        nthLevel(root->right,currLevel+1,level,ans); // little changed than prev
        nthLevel(root->left,currLevel+1,level,ans);
    }

    void levelOrder(TreeNode* root,vector<int>& ans){
        int n = ans.size();
        for(int i=0;i<n;i++){
            nthLevel(root,0,i,ans);
        }
    }
    vector<int> leftView(TreeNode *root) {
        vector<int>ans(Levels(root),0);// size of vector
        levelOrder(root,ans);
        return ans;
    }
};*/



// --------------------Methode 02 PreORder APproach------

/*class Solution {
public:
    int Levels(TreeNode* root) {
        if (root == NULL) return 0;
        return 1 + max(Levels(root->left), Levels(root->right));
    }

    void preOrder(TreeNode* root, vector<int>& ans, int level) {
        if (root == NULL) return;
        // Only set the value if it's the first node at this level
        if (ans[level] == -1) ans[level] = root->val;
        preOrder(root->left, ans, level + 1);
        preOrder(root->right, ans, level + 1);
    }

    vector<int> leftSideView(TreeNode* root) {
        int levels = Levels(root); // Find the depth of the tree
        vector<int> ans(levels, -1); // Initialize with -1 or any placeholder
        preOrder(root, ans, 0); // Traverse the tree
        return ans;
    }
};
*/


//-----------------------------METHOIDE 03---------------------------------
/*class Solution {
public:
    void leftView(TreeNode* root, int& maxLevel, int currLevel, vector<int>& vec) {
        if (!root) return;
        if (currLevel > maxLevel) {
            maxLevel = currLevel;
            vec.push_back(root->val);
        }
        leftView(root->left, maxLevel, currLevel + 1, vec);  // Prioritize left subtree
        leftView(root->right, maxLevel, currLevel + 1, vec);
    }  
    vector<int> leftSideView(TreeNode* root) {
        vector<int> ans;
        int maxLevel = -1; // Define a modifiable variable
        leftView(root, maxLevel, 0, ans);
        return ans;
    }
};
*/