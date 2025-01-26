/*
        ## Top view of Binary Tree 

                                (1) l=0
                                / \
                    l=-1      (2)  (3) l=1
                              / \   /  \
                  l=-2       (4) (5) N   (3) l=2
                            /  \ /  \   / \
                 l=-3      n (1) N (2) (2) N l=3

                 

             Level --> for right side  +1
                       for left side -1

          ## 1-2-4-1  3-3

            Part  01 - Left Boundery (including leaf node) 1-->2-->4-->N
            part  02 - right boundary (including leaf node)--> rev or 3-->3-->N

         
*/

#include<iostream>
#include<unordered_map>
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


void topView(Node* root){
    unordered_map<int,int>m; // <level,root->val>
    queue< pair<Node*,int> >q; // <Node,level>
    pair<Node*,int> r;
    r.first = root;
    r.second = 0;
    q.push(r);
    m[0] = root->val;

    // BFS
    while(q.size()>0){
        Node* temp = (q.front()).first; // root
        int level = (q.front()).second; // level
        q.pop();
        if(m.find(level)==m.end()){ // if already not present ---> push
            m[level] = temp->val;
        }
        if(temp->left!=NULL){
            pair<Node*,int> p;
            p.first = temp->left;
            p.second = level-1;
            q.push(p);
        }
        if(temp->right!=NULL){
            pair<Node*,int> p;
            p.first = temp->right;
            p.second = level+1;
            q.push(p);
        }

    }
    int minLevel = INT32_MAX;
    int maxLevel = INT32_MIN;
    for(auto x:m){
        int level = x.first;
        minLevel = min(minLevel,level);
        maxLevel = max(maxLevel,level);
    }
    for(int i=minLevel;i<=maxLevel;i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}


int main(){
    // construct
    int arr[] = {1,2,3,4,5,INT32_MIN,3,INT32_MIN,1,INT32_MIN,2,2,INT32_MIN};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = consturct(arr,n);

   // top view 
   topView(root);
}