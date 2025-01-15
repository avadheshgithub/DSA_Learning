#include<iostream>
#include<vector>
using namespace std;

class Stack{
public:
    vector<int>vec; // No overflow in vector
    int idx = -1;

    void push(int val){
        vec.push_back(val);
    }

    void pop(){
        if(vec.size()==0){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        vec.pop_back();
    }

    int top(){
        if(idx==0){
            cout<<"stack is empty"<<endl;
        }
        return vec[vec.size()-1];
    }

    int size(){
        return vec.size();
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