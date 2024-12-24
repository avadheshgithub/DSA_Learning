/*
        ## Reoerder Queue (interlink 1st half with 2nd half) --> do this using one stack only

        -------------------------
        1  2  3  4  5  6  7  8  
        -------------------------

        # Even Length always--->
        first half and 2nd half interlink

        final ans
        ----------------------------
        1   5  2   6  3   7   4    8
        ----------------------------

        1. first half ko push kro stack st me;and push into queue again
        2. remaining half push into stack;
        3. now stack se queue me and qeueue se queue me--->same order me
        4. reverse the queue using stack --->Ans;
*/

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

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

void reorder(queue<int>& q){
        stack<int>st;
        int n = q.size();

        // pop the 1st half element of the q to the st;
        for(int i=0;i<n/2;i++){
                st.push(q.front());
                q.pop();
        }
        //empty the st into q;
        while(st.size()>0){
                q.push(st.top());
                st.pop();
        }
        // pop the 2nd half (now the first half) of the q to st;
        for(int i=0;i<n/2;i++){
                st.push(q.front());
                q.pop();
        }
        // interleave one by one
        while(st.size()>0){
                q.push(st.top());
                st.pop();
                q.push(q.front());
                q.pop();
        }
        // reverse the queue using stack
        while(q.size()>0){
                st.push(q.front());
                q.pop();
        }
        while(st.size()>0){
                q.push(st.top());
                st.pop();
        }
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    display(q);
    reorder(q);
    display(q);
}