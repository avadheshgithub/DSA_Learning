
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
    // 10 20 30 40 (Nodes that are only assigned Values )

    // Node a;
    // a.val = 10;
    // Node b;
    // b.val = 20;
    // Node c;
    // c.val = 30;
    // Node d;
    // d.val = 40;


    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    // Linking part to each other (10-->20-->30-->40-->NULL)
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    Node* ptr = &b;
    cout<<(*ptr).val<<endl; // 20
    cout<<ptr->val<<endl;   // 20
    cout<<b.val<<endl;      // 20

    // B value only through A
    cout<<(*(a.next)).val<<endl; // 20
    cout<<(a.next)->val<<endl;   // 20

    // Change Value
    (a.next)->val = 70;
    cout<<b.val<<endl;    // 70


    // D value Using Through A
    cout<<(*((*((*(a.next)).next)).next)).val<<endl; // 40
    cout<<(((a.next)->next)->next)->val<<endl;       // 40


    // Traversal
    Node temp = a;
    while(true){            // Infinite time 
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = (*(temp.next));
    }

}