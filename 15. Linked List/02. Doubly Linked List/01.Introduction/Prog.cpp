/*

    ## Doubly Linked List - node contain adress of next & prevoious Node 

        Benefit - we can travel in both direction backward & next Direction
                - Reverse order display easy
                - any node given , can be accessed each node of Linked List

                

    ------|  NULL  |  val  |     |----------|   |  val  |    |------------|   |  val | NULL |------

           First Ndoe                     second node                          third Node

           Head Node                                                            tail Node


*/
#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void display(Node* head){  // Space complexity - O(1)
    while (head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
void displayReverse(Node* tail){  // Space complexity - O(1)
    while (tail){
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<endl;
}
void displayRec(Node* head){  // Space Complexity - O(n)
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayRec(head->next);
}

void displayRecReverse(Node* head){  // Space Complexity - O(n)
    if(head==NULL) return;
    displayRecReverse(head->next);
    cout<<head->val<<" ";
}

int main(){
    // 10  20  30  40  50
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b; 
    b->next = c;
    c->next = d;
    d->next = e;

    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;

    display(a);
    displayReverse(e);

}