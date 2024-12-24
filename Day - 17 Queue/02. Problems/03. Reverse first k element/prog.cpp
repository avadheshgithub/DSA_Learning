/*
        ## Reverse first k element of a queue     

    ## a loop til i<2 and pop and store into a stack and push from the back
    ## a loop till i<n-k times to pop elements ans again push into the same queue
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

void reversek(queue<int>& q , int k){
    stack<int>st;
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    int n = q.size();
    for(int i=0;i<n-k;i++){
        q.push(q.front());
        q.pop();
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

    display(q);
    int k = 2;
    reversek(q,k);
    display(q);
}