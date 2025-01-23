
/*
        ## sum of Tree

            1. left subTree

            2. right Subtree


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

int Sum(Node* root){
        if(root==NULL) return 0;
        return root->val + Sum(root->left) + Sum(root->right);
}

int sumOfTree(Node* root){   // more readable code --> sum
        if(root==NULL) return 0;
        int leftSum = sumOfTree(root->left);
        int rightSum = sumOfTree(root->right);
        return root->val+leftSum+rightSum;
}

int product(Node* root){
        if(root==NULL) return 1;
        return root->val * product(root->left) * product(root->right);
}

int ProductOfTree(Node* root){   // more readable code --> Product
        if(root==NULL) return 1;
        int leftProd = ProductOfTree(root->left);
        int rightProd = ProductOfTree(root->right);
        return root->val*leftProd*rightProd;
}

void product2(Node* root,long long int &prod){ //TC && SC - O(n)
        if(root==NULL) return;
        if(root->left) prod*=root->left->val;
        if(root->right) prod*=root->right->val;
        product2(root->left,prod);
        product2(root->right,prod);
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

        cout<<Sum(a)<<endl;
        cout<<sumOfTree(a)<<endl;
        cout<<product(a)<<endl;
        cout<<ProductOfTree(a)<<endl;


        long long int product = a->val;
        product2(a,product);
        cout<<"product is : "<<product<<endl;



}