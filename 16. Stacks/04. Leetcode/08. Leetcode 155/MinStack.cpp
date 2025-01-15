/*
    ## Min Stack   (Leetcode 155)
*/
//-----------------------------------------------------------------------------------------------------
/*       ## (1) First Approach - use two stack O(n)---> Space & Time complexity

            Stack<int>st;
            stack<int>helper;
            int mn = INT_MAX;
            while(st.size>0){
                mn = min(mn,st.top());
                helper.push(st.top());
                st.pop();
            }
            while(helper.size()>0){
                st.push(helper.top());
                helper.pop();
            }
            return mn;
------------------------------------------------------------------------------------------------------        

        ## (2) Second Approach - Use two stack but while pushing with conditions O(1)&O(n)--TIMe-SPACE

            stack<int>st;
            stack<int>helper;

            push(val){
                st.push(val);
                if(val<helper.top()){
                    helper.push(val)'
                }
                else{val>=helper.top())
                    helper.push(helper.top());
                }
            }


            class MinStack {
public:
    stack<int>st;
    stack<int>helper;
    MinStack() {     // COnstructor
        
    }
    void push(int val) {                   //O(1)
        st.push(val);
        if(helper.size()==0 || val < helper.top()) helper.push(val);
        else helper.push(helper.top());
    }
    void pop() {                           //O(1)
        st.pop();
        helper.pop();
    }
    int top() {                           //O(1)
        return st.top();
    }
    int getMin() {                      //O(1) and space O(n)
        return helper.top();
    }
};
---------------------------------------------------------------------------------------------------


            ## (3) third Approach - O(n) & O(1) -- TIme And SPACE  ---Using Vector 

    class MinStack {
public:
vector<int>v;
    MinStack() {     // COnstructor
        
    }
    void push(int val) {                   //O(1)
        v.push_back(val);  
    }
    void pop() {                           //O(1)
        v.pop_back();
    }
    int top() {                           //O(1)
        return v[v.size()-1];
    }
    int getMin() {                      //O(1) and space O(n)
        return *min_element(v.begin(), v.end());
    }
};
--------------------------------------------------------------------------------------------------


        ## (4) Fourth Methode - O(1) space and time  ---> Using Dummy Variables

        .dummy variable store ---> 2*val-min
        .back to get that value --> 2*min-oldmin = st.top()
        .                            oldMin = 2*min-st.top();   & min = oldMIn

         int min;
         push(val){
            if(val<min){
                st.push(2*val-min);         // Special math => 2*val-min <min  would be
            }
         }
    class MinStack {
public:
    stack<long long>st;
    long long min;
    MinStack() {
        min = LLONG_MAX;
    }
    
    void push(int val) {
        long long x = (long long) val;
        if(st.size()==0){
            st.push(x);
            min = x;
        }
        else if(x>=min)st.push(val);
        else{ //val<min
            st.push(2*x-min);
            min = x;
        }
    }
    
    void pop() {
        if(st.top()>=min) st.pop();
        else{ // st.top()<min : A fake values is present
            // before poping retrieve oldmin
            long long oldMin = 2*min-st.top();
            min = oldMin;
            st.pop();
        }
    }
    
    int top() {
        if(st.top()<min) return min;
        else return (int)st.top(); // TypeCasting
    }
    
    int getMin() { //O(1)
        return (int) min;
    }
};



*/