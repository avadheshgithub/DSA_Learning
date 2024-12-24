/*
        ## Desing Circular Dequeue          {leetcode 641}

            --- Using Array / vector

        TC - O(1);
        SC - O(k) // K is size
*/

/*class MyCircularDeque {
public:
    vector<int>a;
    int front = -1 , rear = -1;
    int curr = 0;
    int size;

    MyCircularDeque(int k) {
        a.resize(k);
        size = k;
    }
    
    bool insertFront(int value) {  O(1)
        if(isFull()) return false;
        if(front==-1 && rear==-1){
            front = rear = 0;
            a[front] = value;
        }
        else if(front==0){  
            front = size-1;
            a[front] = value;
        }
        else{
            front = front-1;
            a[front] = value;
        }
        curr++;
        return true;
    }
    
    bool insertLast(int value) {  O(1)
        if(isFull()) return false;
        if(front==-1 && rear==-1){
            front = rear = 0;
            a[rear] = value;
        }
        else if(rear==size-1){
            rear = 0;
            a[rear] = value;
        }
        else{
            rear = rear+1;
            a[rear] = value;
        }
        curr++;
        return true;
    }
    
    bool deleteFront() { // O(1)
        if(isEmpty()) return false;
        if(front==size-1) front = 0;
        else front = front+1;
        curr--;
        return true;
    }
    
    bool deleteLast() {  // O(1)
        if(isEmpty()) return false;
        if(rear==0) rear = size-1;
        else rear = rear-1;
        curr--;
        return true;
    }
    
    int getFront() {  // O(1)
        if(isEmpty()) return -1;
        return a[front];
    }
    
    int getRear() {  // O(1)
        if(isEmpty()) return -1;
        return a[rear];
    }
    
    bool isEmpty() {  //O(1)
        return(curr==0);
    }
    
    bool isFull() {  //O(1)
        return(curr==size);
    }
};
*/