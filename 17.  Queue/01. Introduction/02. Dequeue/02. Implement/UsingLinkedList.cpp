/*


DeQue_Class --> User Defined Data Structure in Linked List

    ## Operations 
    
        Doubly LinkedList ll;

        1. pushFront();
        2. pushBack();

        3. front();
        4. back()
        5. size();
        6. display();

        7. popFront();
        8. popBack();

        9. size();
        10. isEmpty();

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


class Deque {
public:                         // User Defined Data Structure
    Node* head;
    Node* tail;
    int s;

    Deque() {      // Constructor
        head = tail = NULL;
        s = 0;
    }

    void pushBack(int val) {            //T.C. 0(1)
        Node* temp = new Node(val);
        if (s == 0)
            head = tail = temp;
        else {
            tail->next = temp;
            temp->prev = tail;  // Extra
            tail = temp;
        }
        s++; // Increment s
    }

    void pushFront(int val){
        Node* temp = new Node(val);
        if (s == 0)
            head = tail = temp;
        else {
            temp->next = head;
            head->prev = temp; // Exctra
            head = temp;
        }
        s++; // Increment s
    };

    void popFront(){
        if(s==0) {
            cout<<"list is Empty"<<endl;
            return;
        }
        head = head->next;
        if(head!=NULL)head->prev = NULL; // Extra
        if(head==NULL) tail=NULL;  // Extra
        s--;
    }

    void popBack(){     // Space Complezity - O(1)
        if(s==0){
            cout<<"List is empty"<<endl;
            return;
        }
        else if(s==1){  // Extra
            popFront();
            return;
        }
        Node* temp = tail->prev; 
        temp->next = NULL;
        tail = temp;
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
    Deque dq;

    dq.pushBack(10);  // {10->NULL}
    dq.display();
    dq.pushBack(20);  // {10->20->NULL}
    dq.display();
    dq.pushBack(30);  // {10->20->30->NULL}
    dq.pushBack(40);  // {10->20->30->40->NULL}
    dq.display();
    dq.pushFront(50);  // {50->10->20->30->40->NULL}
    dq.display();
    dq.pushFront(24);  // (24->50->10->20->30->40->NULL)      
    dq.display();  

    cout<<dq.size()<<endl; //6

    dq.popFront();  // {50->10->20->80->30->40->NULL}
    dq.display();
    dq.popBack();  // {50->10->20->80->30->NULL}
    dq.display() ;
    
       
}

