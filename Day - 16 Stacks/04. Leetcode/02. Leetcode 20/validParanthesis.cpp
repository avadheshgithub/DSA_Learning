/*

    ## Valid Parenthesis  {leetcode 20}

    ## hint --> Stack

                1.  opening bracket if --->push
                2. if closing bracket --> 1. stack is empty ?  2.check top most if same --> pop
                3. if at last stack is nonEmpty---> False

        Time Com - O(n);
        Space Com - O(n);

*/
/*class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' or s[i]=='[' or s[i]=='{') st.push(s[i]);
            else if(s[i]==')'){
                if(st.empty() or st.top() != '(') return false;
                st.pop();
            }
            else if(s[i]==']'){
                if(st.empty() or st.top() != '[') return false;
                st.pop();
            }
            else if(s[i]=='}'){
                if(st.empty() or st.top() != '{') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};*/