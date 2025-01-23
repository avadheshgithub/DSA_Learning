/*
        ## Find the node with max & min value

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

int MaxVal(Node* root){
        if(root==NULL) return INT32_MIN;
        return max(root->val ,max(MaxVal(root->left), MaxVal(root->right)));
}

int maxInTree(Node* root){  // readable code --> find max
        if(root==NULL) return INT32_MIN;
        int lmax = maxInTree(root->left);
        int rmax = maxInTree(root->right);
        return max(root->val,max(lmax,rmax));
}

int MinVal(Node* root){
        if(root==NULL) return INT32_MAX;
        return min(root->val ,min(MinVal(root->left), MinVal(root->right)));
}

int minInTree(Node* root){  // readable code --> find Min
        if(root==NULL) return INT32_MAX;
        int lmin = minInTree(root->left);
        int rmin = minInTree(root->right);
        return min(root->val,min(lmin,rmin));
}

void findMin(Node* root,int &mini){ // TC & SC = O(n)
        if(root==NULL) return;
        if(root->left) mini = min(root->left->val,mini);
        if(root->right) mini = min(root->right->val,mini);
        findMin(root->left,mini);
        findMin(root->right,mini);
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

        cout<<MaxVal(a)<<endl;
        cout<<MinVal(a)<<endl;
        cout<<maxInTree(a)<<endl;
        cout<<minInTree(a)<<endl;

        int mini = a->val;
        findMin(a,mini);
        cout<<"Minimum is :"<<mini<<endl;

}