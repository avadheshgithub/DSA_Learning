/*
        ## Remove the all elements present at even position in queue . consider O-based indexing

    
        front                        back
    idx  0   1    2    3     4
        -------------------------------
    pop  1   2    3    4     5        push
        -------------------------------


        
*/
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void remoevAtEven(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){
        if(i%2==0) q.pop();
        else{
            int x = q.front();
            q.pop();
            q.push(x);
        }
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
    remoevAtEven(q);
    display(q);

    

}
