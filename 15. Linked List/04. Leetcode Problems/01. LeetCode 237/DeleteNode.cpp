
// Delete NODe in linked list

#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;   // Value Assigned By the Constructor
        this->next = NULL; // Itital Address Of Each node is Null
    }
};

void display(Node* head){             // Iterative Solu --- T.C. -> O(n)   S.C. -> O(1)
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node*  deleteNode(Node* head, Node* target){
    if(head==target){
        head = head->next;
        return head;
    }
    Node* temp = head;
    while(temp->next != target){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}

int main(){
    // 10 20 30 40 (Nodes that are only assigned Values )

    //Using COnstructor
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node (50);

    // Forming link Between Nodes
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Node* head = a;
    display(head);
    deleteNode(head,a);
    display(head);

    
}