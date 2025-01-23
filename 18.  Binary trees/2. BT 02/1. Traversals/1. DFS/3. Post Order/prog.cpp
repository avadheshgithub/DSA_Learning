
/*
        ## Display  the nodes

                                (1) a    
                               /   \
                         b   (2)   (3) c
                             / \    / \
                           (4) (5) (6) (7) Leaf Nodes

                            d   e   f   g

        ## Time Complexity - O(n)
            
        ## Space Complexity- O(h) 

                worst/Avg case - O(n)
                best case - O(logn)
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

void postOrder(Node* root){  // post order
        if(root==NULL) return;
        postOrder(root->left); // left
        postOrder(root->right); // right
        cout<<root->val<<" "; // root
}

void postOrder2(Node* root){ // calling order changed --> reverse postOrder
        if(root==NULL) return;
        postOrder2(root->right);
        postOrder2(root->left);
        cout<<root->val<<" ";
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

        postOrder(a);
        cout<<endl;
        postOrder2(a);
        
}