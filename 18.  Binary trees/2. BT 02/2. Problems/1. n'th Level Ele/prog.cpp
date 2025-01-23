/*
        ## N'th Level Elements   (Left to right)

                                (1)  ----------lEVEL 1  
                               /   \
                             (2)   (3)  -------lEVEL 2
                             / \    / \
                           (4) (5) (6) (7) -----lEVEL 3

        ## lEVEL = 3

        ## El = 4,5,6,7
        

        ## Logic

            void n'thLevel(root,level,currLevel){
                if(level==currLevel){
                    cout<<root->val;
                }
                n'thLevel(root->left,level,currLevel+1)
                n'thLevel(root->right,level,currLevel+1)
            }
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

void nthLevel(Node* root,int currLevel,int level){
    if(root==NULL) return; //base
    if(currLevel==level) cout<<root->val<<" ";
    nthLevel(root->left,currLevel+1,level);
    nthLevel(root->right,currLevel+1,level);

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

        nthLevel(a,1,3);
}