/*
        ## Implement the Queue using stacks    
*/

/*class MyQueue {
public:
    stack<int>st;
    stack<int>helper;
    MyQueue() { // COnstructor
        
    }
    void push(int x) { // O(1)
        st.push(x);
    }
    
    int pop() {    // O(n)
        // remove at bottom
        while(st.size()>0){
            helper.push(st.top());
            st.pop();
        }
        int x = helper.top();
        helper.pop();
        while(helper.size()>0){
            st.push(helper.top());
            helper.pop();
        }
        return x;
    }

    int peek() { //Front  O(n)
        // Retrieve at bottom
        while(st.size()>0){
            helper.push(st.top());
            st.pop();
        }
        int x = helper.top();
        while(helper.size()>0){
            st.push(helper.top());
            helper.pop();
        }
        return x;
    }
    
    bool empty() {
        if(st.size()==0) return true;
        else return false;
    }
};*/



//-------------------------------2 ND METHODE -----------------------------------------------------


/*class MyQueue {
public:
    stack<int>st;
    stack<int>helper;
    MyQueue() { // COnstructor
        
    }
    void push(int x) { // O(n)
        //push at bottom
        if(st.size()==0){
            st.push(x);
            return;
        }
        else{
            while(st.size()>0){
                helper.push(st.top());
                st.pop();
            }
            st.push(x);
            while(helper.size()>0){
                st.push(helper.top());
                helper.pop();
            }
        }
    }

    int pop() {    // O(1)
        // remove at st top
        int x = st.top();
        st.pop();
        return x;
    }

    int peek() { //Front  O(1)
        // Retriev st top 
        return st.top();
    }
    
    bool empty() {
        if(st.size()==0) return true;
        else return false;
    }
};*/