/*
    ## Remove Kth element fromt the top of the stack

*/
#include<iostream>
#include<stack>
using namespace std;

void removeKthElement(int k,stack<int>& st){
    stack<int>temp;
    k--;
    while(k--){ // till reach kth eleemnt , remove elements
        temp.push(st.top());
        st.pop();
    }
    st.pop(); // pop Kth element
    while(!temp.empty()){   // Fill remaining element
        st.push(temp.top());
        temp.pop();
    }
}

void display(stack<int>& st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main(){
    stack<int>st;
    for(int i=0;i<10;i++){
        st.push(i);
    }

    removeKthElement(4,st);
    display(st);

}