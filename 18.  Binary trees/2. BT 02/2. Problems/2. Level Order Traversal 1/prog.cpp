/*
        ## Level Order Traversal   [DFS]                 using recursive

                                (1)  ----------lEVEL 1  
                               /   \
                             (2)   (3)  -------lEVEL 2
                             / \    / \
                           (4) (5) (6) (7) -----lEVEL 3

        ## lEVEL = 1,2,3

        ## Output =   (Left to right)
                    1
                    2  3
                    4  5  6  7
        
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

void nthLevel(Node* root,int currLevel,int level){ // left to right
    if(root==NULL) return; //base
    if(currLevel==level){
        cout<<root->val<<" "; // root
        return ;
    }
    nthLevel(root->left,currLevel+1,level);
    nthLevel(root->right,currLevel+1,level);

}

void levelOrder(Node* root){
    int n = Levels(root);
    for(int i=1;i<=n;i++){
        nthLevel(root,1,i);
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


/*
        ## Level Order Traversal   [DFS]  using Queue

                                (1)  ----------lEVEL 1  
                               /   \
                             (2)   (3)  -------lEVEL 2
                             / \    / \
                           (4) (5) (6) (7) -----lEVEL 3

        ## lEVEL = 1,2,3

        ## Output =   (Left to right)
                    1
                    2  3
                    4  5  6  7
        
*/