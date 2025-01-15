/*
        ## Desing the Circular Queue using the array         [Leetcode 622]
*/

/*class MyCircularQueue {
public:
    int f;  // Rear
    int b; // Back
    int s; // Curr size
    int c; // Capacity
    vector<int>arr;

    MyCircularQueue(int k) { // k is the capacity
        f = 0;
        b = 0;
        s= 0;
        c=k;
        vector<int>v(k);
        arr = v;
    }
    
    bool enQueue(int val) { //push_back
        if(s==c) return false;
        arr[b] = val;
        b++;
        if(b==c) b=0; // again b ko front pe lao
        s++;
        return true;
    }
    
    bool deQueue() { // pop front
        if(s==0) return false;
        f++;
        if(f==c) f=0; //again f ko front pe lao
        s--;
        return true;
    }
    
    int Front() {
        if(s==0) return -1;
        return arr[f];
    }
    
    int Rear() { //back
        if(s==0) return -1;
        if(b==0) return arr[c-1];// agar b 0 pe aa gya circular me
        return arr[b-1];
    }
    
    bool isEmpty() {
        if(s==0) return true;
        else return false;
    }
    
    bool isFull() { //overflow (s==k)
        if(s==c) return true;
        else return false;
    }
};



*/


//Manual Implementations ---
#include <iostream>
#include <vector>
using namespace std;

class MyCircularQueue {
public:
    int f;  // Front
    int b;  // Back
    int s;  // Current size
    int c;  // Capacity
    vector<int> arr;

    MyCircularQueue(int k) { // k is the capacity
        f = 0;
        b = 0;
        s = 0;
        c = k;
        arr = vector<int>(k); // Initialize the vector with fixed size
    }
    
    bool enQueue(int val) { // Push back
        if (s == c) return false; // Queue is full
        arr[b] = val;
        b = (b + 1) % c; // Move back pointer (circular)
        s++;
        return true;
    }
    
    bool deQueue() { // Pop front
        if (s == 0) return false; // Queue is empty
        f = (f + 1) % c; // Move front pointer (circular)
        s--;
        return true;
    }
    
    int Front() {
        if (s == 0) return -1; // Queue is empty
        return arr[f];
    }
    
    int Rear() { // Back
        if (s == 0) return -1; // Queue is empty
        return arr[(b - 1 + c) % c]; // Calculate rear index (circular)
    }
    
    bool isEmpty() {
        return s == 0;
    }
    
    bool isFull() { // Overflow (s == k)
        return s == c;
    }

    void display() {
        if (s == 0) {
            cout << "Queue is empty." << endl;
            return;
        }
        for (int i = 0; i < s; ++i) {
            cout << arr[(f + i) % c] << " ";
        }
        cout << endl;
    }
};

int main() {
    MyCircularQueue queue(5); // Create a circular queue of capacity 5

    queue.enQueue(10);
    queue.enQueue(20);
    queue.enQueue(30);
    queue.display(); // Print the queue: 10 20 30

    queue.deQueue();
    queue.display(); // Print the queue: 20 30 40

    queue.enQueue(50);
    queue.enQueue(60);
    queue.display(); // Print the queue: 20 30 40 50 60

    queue.enQueue(70); // Should return fals
    queue.display(); // Print the queue: 30 40 50 60

    return 0;
}




