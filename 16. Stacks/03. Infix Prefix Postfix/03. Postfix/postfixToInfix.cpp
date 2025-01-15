/*
    PostFix to infix     [val1 val2  op]
*/

#include <iostream>
#include <stack>
using namespace std;

string solve(string val1,string val2,char ch){
    // val1 op val2
    string s = "";
    s+=val1;
    s.push_back(ch);
    s+=val2;
    return s;
}

int main() {
    string s = "79+4*8/3-"; // Input expression

    // one stacks: one for eveluation
    stack<string> val;

    for (int i = 0; i < s.length(); i++) {
        // Check if s[i] is a digit (0-9)
        int ascii = (int)(s[i]); // Using ASCII value for digit check
        if (ascii >= 48 && ascii <= 57) {
            val.push(to_string (s[i] - 48)); // Convert char to int using ASCII manipulation
        }
        else{ //s[i] it is --> *, /, +, -;
            // compute ans
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans = solve(val1,val2,s[i]);
            val.push(ans);
        }
    }

    // Final result
    cout << val.top() << endl;

    return 0;
}
