/*
    ## reverse queue using stack
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
    
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    display(q);
    reverse(q);
    display(q);

}