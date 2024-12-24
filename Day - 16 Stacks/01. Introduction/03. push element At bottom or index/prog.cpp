/*
    ## push element at bottom / any index   
*/

#include<iostream>
#include<stack>
using namespace std;

void print(stack<int>& st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
void pushAtBottom(stack<int>& st,int val){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
void pushAtBottomRec(stack<int>& st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    };
    int x = st.top();
    cout<<x<<" ";      //kam
    st.pop();
    pushAtBottomRec(st,val); //call
    st.push(x);
}
void pushAtIndex(stack<int>& st,int idx, int val){
    stack<int>temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
void displayRevRec(stack<int>& st){ // reverse display using recursion
    if(st.size()==0) return;
    int x = st.top();
    cout<<x<<" ";      //kam
    st.pop();
    displayRevRec(st); //call
    st.push(x);
}
void displayRec(stack<int>& st){ // simple display using recursion
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    displayRec(st);  //call
    cout<<x<<" ";    //kam
    st.push(x);
}

void reverse(stack<int>& st){
    if(st.size()==1) return;
    int x =st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st,x);
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);
    
    pushAtBottom(st,80);
    print(st);

    pushAtBottomRec(st,-10);
    print(st);

    pushAtIndex(st,2,90);
    print(st);

    displayRevRec(st);
    cout<<endl;
    displayRec(st);

    reverse(st);
    

}