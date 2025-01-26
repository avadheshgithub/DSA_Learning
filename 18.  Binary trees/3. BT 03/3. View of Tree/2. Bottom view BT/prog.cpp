/*
        ## Bottom view of Binary Tree 

                                (1) l=0
                                / \
                      l=-1    (2)  (3) l=+1
                              / \   /  \
                     l=-2   (4) (5) (1) (3) l=+2
                    

            Level --> for right side  +1
                       for left side -1

          ## ans - 4,2,5,1,3,3


          ## TC = O(h) + O(n)

         
*/

#include <iostream>
#include <map>
#include <queue>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* construct(int arr[], int n) {
    if (n == 0) return NULL;

    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;

    while (!q.empty() && i < n) {
        Node* temp = q.front();
        q.pop();

        // Add left child
        if (i < n && arr[i] != INT32_MIN) {
            temp->left = new Node(arr[i]);
            q.push(temp->left);
        }
        i++;

        // Add right child
        if (i < n && arr[i] != INT32_MIN) {
            temp->right = new Node(arr[i]);
            q.push(temp->right);
        }
        i++;
    }
    return root;
}

void bottomView(Node* root) {
    if (!root) return;

    map<int, int> m; // <level, root->val>
    queue<pair<Node*, int>> q; // <Node, level>
    q.push({root, 0});

    // BFS
    while (!q.empty()) {
        auto temp = q.front();
        q.pop();

        Node* node = temp.first;
        int level = temp.second;

        // Update the map for the current level
        m[level] = node->val;

        if (node->left) q.push({node->left, level - 1});
        if (node->right) q.push({node->right, level + 1});
    }

    for (auto x : m) {
        cout << x.second << " ";
    }
    cout << endl;
}

int main() {
    // construct
    int arr[] = {1, 2, 3, 4, 5, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* root = construct(arr, n);

    // Bottom view
    bottomView(root);

    return 0;
}
