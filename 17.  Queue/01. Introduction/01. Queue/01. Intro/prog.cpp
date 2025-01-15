/*
    ##  Queue -- it is kind of data structure that follow FIFo

        FIFO - first in First out

        push---> ---> rear ---->at backSide
        pop ----> front----> at front side

        1.  insertion and direction from both end
        2. operations - push, pop, front (top)

        3. Overflow --> your are out of memory or index out of boud and we are inserting
        4. underflow ->queue is empty and try to these functions

*/

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue<int>& q){
    stack<int>st;
    while(q.size()>0){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    // empty the stack and fill into queue
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
}
void display(queue<int>& q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();  // poping from front
        q.push(x); // Pushing from end
    }
    cout<<endl;
}

int main(){
    queue<int>q;
    //push -- at backside
    //pop  -- at front side
    //front-->Top; first pushed element
    //size,empty() true/False
    // back ----->rare element

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<<q.front()<<endl; // 10 jo sbse phle push hua tha
    cout<<q.size()<<endl; // 5
    cout<<q.back()<<endl; // 50
    q.pop();
    cout<<q.front()<<endl; // 20
    cout<<q.size()<<endl;  // 4

    // DISPLAY   TC o(n)  && SC o(1)
    display(q);
    q.pop();
    display(q);
    reverse(q);
    display(q);

}