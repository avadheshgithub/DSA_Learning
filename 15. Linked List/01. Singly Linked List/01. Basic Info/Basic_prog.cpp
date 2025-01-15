/*

## Array Limitation - 
    1. Fixed Size - 
    2. Contigeious Memory Alllocation -
*/

/*
    ## Linked List -

        - creation of a linked list

    ## Code
        class Node{
            int val;          // Value
            Node* next;       // Adress
        }
*/

#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
};

int main(){
    // 10 20 30 40 (Nodes that are only assigned Values )

    Node a;
    a.val = 10;
    Node b;
    b.val = 20;
    Node c;
    c.val = 30;
    Node d;
    d.val = 40;

    // Linking part to each other
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;
}