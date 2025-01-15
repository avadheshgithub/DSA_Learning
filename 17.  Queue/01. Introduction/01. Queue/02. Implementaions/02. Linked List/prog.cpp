/*
    Queue Implementations using Linked list
    
    f - Front - delete
    b - back - push


    
        front                        back
    idx  0   1    2    3     4
        -------------------------------
    pop  1   2    3    4     5        push
        -------------------------------
        f-->
        b-->

    head              tail
    (1)----->(2)---->(3)---->NULL
    front             back


    push-->insertAtTail()
    pop---> deleteAtHead();
    front --> head->val;
    back --> tail->val;
    size --> llSize()


    ## Advantage  
        -1.  unlimited size;
        2. natural like LL
        3. wastage of size is not problem

    ## DisAdvantage
        1. double size of memory -int and add (8 byte for each Node)
                

*/



#include<iostream>
using namespace std;

class Node {        // User Define Data type
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;   // Value Assigned By the Constructor
        this->next = NULL; // Initial Address Of Each node is Null
    }
};

class Queue {
public:                         // User Defined Data Structure
    Node* head;
    Node* tail;
    int s; //size

    Queue() {      // Constructor
        head = tail = NULL;
        s = 0;
    }

    void push(int val) {            //T.C. 0(1)
        Node* temp = new Node(val);
        if (s == 0)
            head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        s++; // Increment size
    }

    void pop(){
        if(s==0) {
            cout<<"Queue is Empty"<<endl;
            return;
        }
        head = head->next;
        s--;
    }


    int front(){
        if(s==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return head->val;
    }

    int back(){
        if(s==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return tail->val;
    }

    int size(){
        return s;
    }

    bool isEmpty(){
        if(s==0) return true;
        return false;
    }
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }


};

int main() {
    Queue q; 
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.display();
    q.push(60); 
    q.display();

    
}

