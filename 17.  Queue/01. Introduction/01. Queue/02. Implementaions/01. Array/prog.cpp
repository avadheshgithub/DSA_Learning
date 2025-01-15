
//Queue implementation using array;

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
    vector<int>arr;

    Queue(int val){   // Constructor
        f = 0;
        b = 0;
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
    }

    void pop(){
        if(f-b==0){   // Size = f-b
            cout<<"Underflow Condition"<<endl;
            return;
        }
        f++;
    }

    int front(){
        if(f-b==0){   
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return arr[f];
    }

    int back(){
        if(f-b==0){   
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return arr[b-1];
    }

    int size(){
        if(f-b==0){   
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return b-f;
    }

    bool isEmpty(){
        if(f-b==0) return true;
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