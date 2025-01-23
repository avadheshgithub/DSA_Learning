/*
            ## Boundary Traversal  

                                (1)
                                / \
                              (2)  (3)
                              / \   /  \
                            (4) (5) N   (3)
                            /  \ /  \   / \
                            n (1) N (2) (2) N

          ## 1-2-4-1-2-2-3-3-

            Part  01 - Left Boundery (Excluding leaf node) 1-->2-->4
            part  02 - leaf nodes (left->right) 1-->2-->2
            part  03 - right boundary (exlcuding leaf node)--> rev or 3-->3-->

         
*/

/*
        ## COnstruct tree from level order traversal     

            arr = {1,2,3,4,5,6,7}

                                (1)  ----------lEVEL 1  
                               /   \
                             (2)   (3)  -------lEVEL 2
                             / \    / \
                           (4) (5) (6) (7) -----lEVEL 3


        ## lOGIC

             arr = [1,2,3,4,5,NULL,6,NULL,NULL,7,8,9,NULL]
            #         i j

                * Let   NULL--> INT_MIN;
        
            # Queue

                front                       back
                -------------------------------

                --------------------------------
                POP                           push

            
            Steps

                queue<Node*> q;

                1. Node* root = new node (arr[0]);
                    q.push(root);

                2. Node* temp = q.front()  & pq.pop;
                    Node* l = new Node (arr[i]);
                    Node* r = new Node (arr[j]);
                    temp->left = l;
                    temp->right = r; 
                    q.push(l&r)
                    i+=2;
                    j+=2;
*/

#include<iostream>
#include<queue>
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

Node* consturct(int arr[],int n){
    queue<Node*>q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size()&&i<n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT32_MIN) l = new Node(arr[i]);
        else l=NULL;
        if(j!=n && arr[j]!=INT32_MIN) r = new Node(arr[j]);
        else r=NULL;
        temp->left =l;
        temp->right = r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push (r);

        i+=2;
        j+=2;
    }
    return root;
}

void leftBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return; // excluding leaf node
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
}

void bottomBoundary(Node* root){ // including leaf node
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}

void rightBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return; // excluding leaf node
    rightBoundary(root->right);
    if(root->right==NULL) rightBoundary(root->left);
    cout<<root->val<<" "; // kamm after call for reverse printing
}

void boundary(Node* root){
    leftBoundary(root);
    bottomBoundary(root);
    rightBoundary(root->right); // staring from root right
}
int main(){
    // construct
    int arr[] = {1,2,3,4,5,INT32_MIN,3,INT32_MIN,1,INT32_MIN,2,2,INT32_MIN};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = consturct(arr,n);

    // boundary level traversal
    boundary(root);
}