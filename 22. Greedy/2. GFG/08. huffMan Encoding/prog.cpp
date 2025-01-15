/*
     ## HuffMan EnCoding   [GFG]
    

    # in a tree -
          
          1. Traverse Left --> 0
          2. Traverse Right --> 1

    ## how To build Tree
        
          1. Create PRiority Queue min heap
          2.  pop first two ele and MERGE and push
          3. Same PRocess choose tWO min and merge both and again push into heap;
*/



/*class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class cmp {
public:
    bool operator()(Node* a, Node* b) {
        return a->data > b->data;
    }
};

class Solution {
public:
    void traverse(Node* root, vector<string>& ans, string temp) {
        if (!root->left && !root->right) {
            ans.push_back(temp);
            return;
        }
        if (root->left) traverse(root->left, ans, temp + '0');
        if (root->right) traverse(root->right, ans, temp + '1');
      }

    vector<string> huffmanCodes(string S, vector<int> f, int N) {
        if (N == 0) return {};
        if (N == 1) return {"0"};

        priority_queue<Node*, vector<Node*>, cmp> pq;

        for (int i = 0; i < N; i++) {
            Node* temp = new Node(f[i]);
            pq.push(temp);
        }

        while (pq.size() > 1) {
            Node* left = pq.top();
            pq.pop();
            Node* right = pq.top();
            pq.pop();

            Node* newNode = new Node(left->data + right->data);
            newNode->left = left;
            newNode->right = right;
            pq.push(newNode);
        }

        Node* root = pq.top();
        vector<string> ans;
        string temp = "";
        traverse(root, ans, temp);

        return ans;
      }
};
*/