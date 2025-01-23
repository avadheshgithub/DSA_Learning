/*
        ## Size of tree = no of node
                level = num of row
                height = level - 1

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

int Size(Node* root){
        if(root==NULL) return 0;
        return 1 + Size(root->left) + Size(root->right);
}

int Levels(Node* root){
        if(root==NULL) return 0;
        return 1 + max(Levels(root->left),Levels(root->right));
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

        cout<<"Size = " <<Size(a)<<endl;
        cout<<"Levels = "<<Levels(a)<<endl;
        cout<<"Height = "<<Levels(a)-1<<endl;
}