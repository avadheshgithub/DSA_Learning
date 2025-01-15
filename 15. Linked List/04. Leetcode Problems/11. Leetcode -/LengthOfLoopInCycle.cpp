/*

    ## Find the length in cycle of linked list;  


    //  Chekck wheather there is a cycle or not
    Step 01 - first check the wheather in linked list , there is cycle or not
    Step 02 - slow ko head pe and fast ko (head+1)th node pe rkho
    Step 03 - slow ko 1 se and fast ko 2 ke speed se aage bdhao
    Step 04 - agar kbhi dono ki values same ho jati hai to there will be loop


    // Next Problem is --> Tell the length of cycle

    step 05  - jha pe dono equal ho jaye (fast==slow) uske just ke 1 bad node pe slow ko set kre
    Step 06 - slow ko 1 se bdhao aur count varibale ko Zero se set krke count+++
    Step 07 - ab jha pe again slow fast ke equal ho jaye tb count value return kr do


*/

#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int n) {
        data = n;
        next = NULL;
    }
};

class linkedlist {
public:
    node* head;
    node* tail;

    linkedlist() {
        head = NULL;
        tail = NULL;
    }

    void display() {
        node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void addFirst(int val) {
        node* temp = new node(val);
        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            temp->next = head;
            head = temp;
        }
    }

    void addCycle(int idx) {
        if (idx <= 0) return; // Invalid index
        node* temp = head;
        idx--;
        while (idx-- && temp) {
            temp = temp->next;
        }
        temp->next->next = head->next; // Only create the cycle if idx is valid
    }

    int findLength() {
        node* fast = head;
        node* slow = head;

        int fl = 0; // checkMark for the cycle
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow) {
                fl = 1;
                break;
            }
        }

        if (fl == 0) return 0; // if no cycle
        int cnt = 1;
        slow = slow->next;
        while (slow != fast) {
            cnt++;
            slow = slow->next;
        }
        return cnt;
    }
};

int main() {
    linkedlist ll;
    ll.addFirst(1);
    ll.addFirst(2);
    ll.addFirst(3);
    ll.addFirst(4);
    ll.addFirst(5);
    ll.addFirst(6);

    // Create a cycle for testing
    ll.addCycle(4);

    // Find the length of the cycle
    int length = ll.findLength();
    cout << "Length of cycle: " << length << endl;

    return 0;
}

