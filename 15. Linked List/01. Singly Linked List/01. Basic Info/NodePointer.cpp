
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

int main(){
    //   HEAD     Tail       
    // 10 20 30 40 (Nodes that are only assigned Values )

    //Using COnstructor
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    // Forming link Between Nodes
    a->next = b;
    b->next = c;
    c->next = d;

    // Print D value
    cout<<a->next->next->next->val<<endl;   // 40

    // Traverse the linked List
    Node* temp = a;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }



}