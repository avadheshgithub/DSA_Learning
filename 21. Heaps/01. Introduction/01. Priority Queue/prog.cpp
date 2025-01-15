/*
    # (Priority Queu) - 
        with the help of this ---> we can get max'th or min'th element &&  funtionality of STL


    ## Problem identification
        1. k'th largest / smallest 
        2. top k frequent
        3. closest k
        4. at any point max/min
        5. sorting(sometimes) 

    ## Operations 
         1. push -- O(logn)  ==> n=pq.size()
         2. pop -- O(logn)   ==> 
         3. top  -- O(1)
         4. size --
         5. empty  --
*/

#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int>pq; // Max heap - default

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"Element at top : "<<pq.top()<<endl;
    pq.pop();
    cout<<"Element at top : "<<pq.top()<<endl;
    cout<<"Size is : "<<pq.size()<<endl;

    if(pq.empty()) cout<<"pq is empty"<<endl;
    else cout<<"pq is not empty"<<endl;


    // min heap
    priority_queue<int,vector<int>,greater<int> >mn;

    mn.push(4);
    mn.push(2);
    mn.push(5);
    mn.push(3);

    cout<<"Element at top : "<<mn.top()<<endl;
    mn.pop();
    cout<<"Element at top : "<<mn.top()<<endl;
    cout<<"Size is : "<<mn.size()<<endl;

    if(mn.empty()) cout<<"pq is empty"<<endl;
    else cout<<"pq is not empty"<<endl;
}