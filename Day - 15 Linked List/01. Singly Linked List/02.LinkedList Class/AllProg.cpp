
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
}

void RecurDisplay(Node* head){           // Recusrive Solu--- T.C-> O(n) S.C. -> O(n)
    if(head==NULL) return;   // Base
    cout<<head->val<<" ";   // Kaam
    RecurDisplay(head->next);  // Call
}

void insertAtEnd(Node* head,int val){    // Insert Without having the Tail
    Node* t = new Node (val);
    while(head->next != NULL) head = head->next;
    head->next = t;
}

int size( Node* head){
    int n =0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        n++;
    }
    return n;
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

    display(a);                      // 10 --> 20 --> 30 --> 40 --> 50 --> NULL
    cout<<endl<<size(a)<<endl;      // 5
    RecurDisplay(a);               // 10->20->30->40->50->NULL
}