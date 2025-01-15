/*


Doubly Linked List_Class --> User Defined Data Structure in Linked List

    ## Operations 
    
        Doubly LinkedList ll;

        1. InsertAtHead();
        2. InsertAtTail();
        3. InsertAtIdx();

        4. getAtIdx();
        5. size;
        6. display();

        7. deletAtHead();
        8. deleteAtTail();
        9. deleteAtIdx();

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


class DLL {
public:                         // User Defined Data Structure
    Node* head;
    Node* tail;
    int size;

    DLL() {      // Constructor
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int val) {            //T.C. 0(1)
        Node* temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else {
            tail->next = temp;
            temp->prev = tail;  // Extra
            tail = temp;
        }
        size++; // Increment size
    }

    void InsertAtHead(int val){
        Node* temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else {
            temp->next = head;
            head->prev = temp; // Exctra
            head = temp;
        }
        size++; // Increment size
    };

    void InsertAtIdx(int idx, int val){                    
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) InsertAtHead(val);
        else if(idx==size)insertAtTail(val);
        else {
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp; // Extra
            t->next->prev = t; //Extra
            size++;
        }
    }

    int getAtIdx(int idx){                  // T.C. --> O(n)
        if(idx<0 || idx>=size) {
            cout<<"invalid index"<<endl;
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            if(idx<size/2){
                Node* temp = head;
                for(int i=1;i<=idx;i++){
                    temp = temp->next;
                }
            return temp->val;
            }
            else{
                Node* temp = tail;
                for(int i=1;i<size-idx;i++){
                    temp = temp->prev;
                }
            }
        }
    }

    void deleteAtHead(){
        if(size==0) {
            cout<<"list is Empty"<<endl;
            return;
        }
        head = head->next;
        if(head!=NULL)head->prev = NULL; // Extra
        if(head==NULL) tail=NULL;  // Extra
        size--;
    }

    void deleteAtTail(){     // Space Complezity - O(1)
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        else if(size==1){  // Extra
            deleteAtHead();
            return;
        }
        Node* temp = tail->prev; 
        temp->next = NULL;
        tail = temp;
        size--;

    }

    void deleteAtIndex(int idx){
        if(idx==0) cout<<"List is Empty"<<endl;
        else if(size<0 || idx>=size) cout<<"Incvalid index"<<endl;
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp; // Extra
            size--;
        }
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
    DLL ll;

    ll.insertAtTail(10);  // {10->NULL}
    ll.display();
    ll.insertAtTail(20);  // {10->20->NULL}
    ll.display();
    ll.insertAtTail(30);  // {10->20->30->NULL}
    ll.insertAtTail(40);  // {10->20->30->40->NULL}
    ll.display();
    ll.InsertAtHead(50);  // {50->10->20->30->40->NULL}
    ll.display();
    ll.InsertAtHead(24);  // (24->50->10->20->30->40->NULL)      
    ll.display();
    ll.InsertAtIdx(4,80); // {24->50->10->20->80->30->40->NULL}
    ll.display();  

    
    cout<<ll.getAtIdx(5)<<endl; // 20
    cout<<ll.size<<endl; //7

    ll.deleteAtHead();  // {50->10->20->80->30->40->NULL}
    ll.display();
    ll.deleteAtTail();  // {50->10->20->80->30->NULL}
    ll.display(); 
    ll.deleteAtIndex(3); // {50->10->20->30->NULL   }
    ll.display() ;
    
       
}

