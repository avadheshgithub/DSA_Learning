/*
        ## Level Order Traversal   [DFS]

                                (1)  ----------lEVEL 1  
                               /   \
                             (2)   (3)  -------lEVEL 2
                             / \    / \
                           (4) (5) (6) (7) -----lEVEL 3

        ## lEVEL = 1,2,3

        ## Output =   (right to left)
                    1
                    3  2
                    7  6  5  4
        
*/

#include<iostream>
using namespace std;

class Node{
public:
        int val;
        Node* left;
        Node* right;

        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

int Levels(Node* root){
        if(root==NULL) return 0;
        return 1 + max(Levels(root->left),Levels(root->right));
}

void nthLevelRev(Node* root,int currLevel,int level){ // right to left
    if(root==NULL) return; //base
    if(currLevel==level){
        cout<<root->val<<" "; // root
        return ;
    }
    nthLevelRev(root->right,currLevel+1,level); //changed from its previo que
    nthLevelRev(root->left,currLevel+1,level);

}

void levelOrder(Node* root){
    int n = Levels(root);
    for(int i=1;i<=n;i++){
        nthLevelRev(root,1,i);
        cout<<endl;
    }
}

int main(){
        Node* a = new Node(1);  // root Node
        Node* b = new Node(2);
        Node* c = new Node(3);
        Node* d = new Node(4);
        Node* e = new Node(5);
        Node* f = new Node(6);
        Node* g = new Node(7);

        a->left = b;
        a->right = c;
        b->left = d;
        b->right = e;
        c->left = f;
        c->right = g;

       
        levelOrder(a);

}


//-------------------- Level Order Traversal  (Right to left)---------------

/*## Level Order Traversal   [DFS]

                                (1)  ----------lEVEL 1  
                               /   \
                             (2)   (3)  -------lEVEL 2
                             / \    / \
                           (4) (5) (6) (7) -----lEVEL 3

        ## lEVEL = 1,2,3

        ## Output =   (right to left)
                    1
                    3  2
                    7  6  5  4

            Queue<TreeNode*>q;

                                    back
            -------------------------
              temp1 temp2  temp3 ---> 
            ------------------------
            front

        
        ## program
    
            queue<TreeNode*>q;
            q.push(root);
            while(!q.empty()){
                int size = q.size();
                vector<int>temp(size);
                for(int i=0;i<size;i++){
                    auto node = q.front();
                    q.pop();
                    temp[i] = node->val; // for reverse --> temp[n-i-1] = node->val

                    if(node->left)q.push(left->val);
                    if(node->right) q.push(right->val);

                    reverse(temp.begin(),temp.end()); // reverse each temp vector
                    ans.push_back(temp);
                }
    
            }

        ## Time complexity-
                1. TC = O(N);
                2. SC = O(2^h + 2^h-1)--->O(2^h)  h = depth of tree

            
        ## Leetcode program


class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};

        queue<TreeNode*>q;
        q.push(root);

        bool level = true;
        vector<vector<int>>ans;

        while(!q.empty()){
            int size = q.size();
            vector<int>temp(size);

            for(int i=0;i<size;i++){
                TreeNode *node = q.front();
                q.pop();

                int index = size-i-1; 
                temp[index] = node->val;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
*/

                



