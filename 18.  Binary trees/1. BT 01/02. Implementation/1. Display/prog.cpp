
/*
        ## Display  the nodes

                                (1) a    
                               /   \
                         b   (2)   (3) c
                             / \    / \
                           (4) (5) (6) (7) Leaf Nodes

                            d   e   f   g
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

void displayTree1(Node* root){
        if(root==NULL) return;
        cout<<root->val<<" ";
        displayTree1(root->left);
        displayTree1(root->right);
}

void displayTree2(Node* root){
        if(root==NULL) return;
        cout<<root->val<<" ";
        displayTree2(root->right); // order changed
        displayTree2(root->left);
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

        displayTree1(a);
}