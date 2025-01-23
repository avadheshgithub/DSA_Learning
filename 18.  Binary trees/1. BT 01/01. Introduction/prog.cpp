/*

        ## tree Data Structure

                1. Linear Data Structure - array, linked List, stack, queue
                2. non linear Data struc - Trees,graphs


        ## Representation
                
                1. root node
                2. child node
                3. parent node
                4. sibling nodes

                5. leaf node  --------> with no child node
                6. internal node -----> 
                7. Ancestor node -----> root to node
                8. Descendant node ---> all down nodes from that node

                9. level -----> generation
                10 . num of edges ---> size-1
                11. size = no of nodes
                12. height = level-1;
        

        ## Properties of Tree

                1. traveling a tree doe by DFS & BFS
                2. it has no loop and no curcuit
                3. it has no self loop


        ## Type 0f tree

                1. Generic tree - multiple children of a node
                2. binary tree - 0,1,2 children possi of a node (up to 2)
                3. Binary search tree - right child value greater than root
                4. AVL Tree - balanced BST

                note - every node has a value & left-right child address


        ## Applications of Tree

                1. Hierarchical data structure
                2. searching efficiecy
                3. sorting
                4. Dynamic data
                5. Efficient insertion & deletion
                6. Easy to implement
        

        ## Implementation - BT

                #. 0,1,2 child nodes

                                (1) a    
                               /   \
                         b   (2)   (3) c
                             / \    / \
                           (4) (5) (6) (7) Leaf Nodes

                            d   e   f   g

        
        ## Type of Binary Tree

                1. Full Binary Tree (0 or 2 children)
                2. Perfect Binary tree (Every node has 2 && leaf node has 0 chi)
                3. Complete Binary tee - Filling node from left to right

                4. Balanced Binary tree - for every node, diff between the level ans right and left subtree should be atmost 1.

                5. degenerate and skewed Binary trees - either 0 or 1 child of each node

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

void displayTree(Node* root){
        if(root==NULL) return;
        cout<<root->val<<" ";
        displayTree(root->left);
        displayTree(root->right);
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

        displayTree(a);
}