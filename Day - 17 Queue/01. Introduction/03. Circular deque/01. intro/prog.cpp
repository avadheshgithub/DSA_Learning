/*
    ## Circular Deque - in array implementation , fully uitlized of array

        if array Capacity = 6;
            dque size = 4  becuase 2 times Pop
            then ---> After last element connect to the front and we can push two more element
            - fully utilized of the array
*/

//Circular Dequeue implementation using array;

/*  f - Front - delete
    b - back - push


    
        front                        back
    idx  0   1    2    3     4
        -------------------------------
    pop  1   2    3    4     5        push
        -------------------------------
        f-->
        b-->

*/

#include<iostream>
#include<vector>
using namespace std;

class Queue{
public:
    int f;
    int b;
    int s;
    vector<int>arr;

    Queue(int val){   // Constructor
        f = 0;
        b = 0;
        s= 0;
        vector<int>v(val);
        arr = v;
    }

    void push(int val){
        if(b==arr.size()){
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[b] = val;
        b++;
        s++;
    }

    void pop(){
        if(s==0){   // Size = f-b
            cout<<"Underflow Condition"<<endl;
            return;
        }
        f++;
        s--;
    }

    int front(){
        if(s==0){   
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return arr[f];
    }

    int back(){
        if(s==0){   
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return arr[b-1];
    }

    int size(){
        if(s==0){   
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return s;
    }

    bool isEmpty(){
        if(s==0) return true;
        return false;
    }

    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Queue q(5); // Assigning size
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.display();
    q.push(60); // Overflow condition
    q.display();

}

/*
    Problem With Array Implementations

        1. size is one of the problem---> if f++ then prevous element poped but not used never although arr size is free of two element

        - wastage of space

        ## Solution: using linkedList Queue implementations

*/