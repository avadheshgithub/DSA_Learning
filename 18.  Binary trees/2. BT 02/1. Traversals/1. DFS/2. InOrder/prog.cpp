
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

void inOrder(Node* root){   // preOrder
        if(root==NULL) return;
        inOrder(root->left); // left
        cout<<root->val<<" "; // root
        inOrder(root->right); // right
}
 
void inOrder2(Node* root){  // cslling order changed  ---> reverse inorder
        if(root==NULL) return;
        inOrder(root->right);
        cout<<root->val<<" ";
        inOrder(root->left);
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

    inOrder(a);
    cout<<endl;
    inOrder2(a);  
}