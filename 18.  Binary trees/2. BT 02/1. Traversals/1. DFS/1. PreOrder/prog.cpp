
/*
        ## Display  the nodes

                                (1) a    
                               /   \
                         b   (2)   (3) c
                             / \    / \
                           (4) (5) (6) (7) Leaf Nodes

                            d   e   f   g

        ## Time Complexity - O(n),   n = num of nodes
            
        ## Space Complexity- O(h)   , (levels + 1) ~ o(h+2)

                worst/Avg case - O(n)   (degenerated/skewed tree)
                best case - O(logn)   (Balanced tree)   

                                1+2^1+2^2+ ---------+ 2^h = n node
                                1(2^H+1  -1)/2-1 = n
                                2^h = n+1/2
                                h = log(n+1/2)
                                h = logn
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

void preOrder(Node* root){  // pre order
        if(root==NULL) return;
        cout<<root->val<<" "; //root
        preOrder(root->left); // left
        preOrder(root->right); // right
}

void preOrder2(Node* root){ // calling order changed ---> reverse preOrder
        if(root==NULL) return;
        cout<<root->val<<" "; 
        preOrder2(root->right); 
        preOrder2(root->left); 
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

        preOrder(a);
        cout<<endl;
        preOrder2(a);
        
}