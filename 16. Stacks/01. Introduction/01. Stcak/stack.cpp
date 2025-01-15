/*
    ## Stack - LIFO/FILO --->(last in first out)

    #Operations 

        - insertion always at top
        - deletion of element at the top
        - get element only on the top

        Stack st;

        - st.push(val); ---> add a new element at the top
        - st.pop();  ---> remove thew topmost elemnt
        - st.top(); ---> return the value at the top
        - st.size(); ---> size of the current stack
        - st.empty()---> true or false


        stack<int>st;
*/

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    cout<<st.size()<<endl; //0
    st.push(20);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl; //4
    st.pop();
    cout<<st.size()<<endl; //3
    cout<<st.top()<<endl; // 30

    // print the elements of stack  (Reverse order)-->emptying the stack
    while(st.size()>0){
        cout<<st.top()<<endl;
        st.pop();
    }

    // how to get the eleemnts back instack after priting /pop
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<endl;
        temp.push(st.top());  // anather stack is used for preserving the elements
        st.pop();
    }

    //putting element back from temp to st;
    while(temp.size()>0){
        cout<<temp.top()<<endl;
        st.push(temp.top());
        temp.pop();
    }
}



