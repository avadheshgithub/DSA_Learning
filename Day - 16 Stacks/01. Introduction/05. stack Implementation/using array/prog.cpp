/*
    ## stack implementation using array or vector    

    #     0     1   2   3   4   5   6   7
    ---------------------------------------------
    arr | 70 | 40 |   |   |   |   |   |  |


    void push(int val){
        idx++;
        arr[idx] = val;
    }

    void pop(){
        idx--;
    }
    
    int top(){
        return arr[idx];
    }

*/

#include<iostream>
using namespace std;

class Stack{
public:
    int arr[5];
    int idx = -1;

    void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0])){
            cout<<"stack overflow"<<endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }

    void pop(){
        if(idx==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        idx--;
    }

    int top(){
        if(idx==-1){
            cout<<"stack is empty"<<endl;
        }
        return arr[idx];
    }

    int size(){
        return idx+1;
    }

    void display(){
        for(int i=1;i<=idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(40);
    st.push(50);

    cout<<st.size()<<endl; //4
    st.pop();
    cout<<st.size()<<endl; //3
    cout<<st.top()<<endl;
    
}
