/*
        infix to pre fix conversion       - prefix    Op   val1   val2
*/
#include <iostream>
#include <stack>
using namespace std;

int prio(char ch) {
    if (ch == '+' || ch == '-') return 1;
    else return 2; // Higher priority for '*' and '/'
}

string solve(string val1, string val2, char ch) {
    // op val1 val2
    string s = "";
    s.push_back(ch);
    s += val1;
    s += val2;
    return s;
}

int main() {
    string s = "(2+6)*4/8-3"; // Input expression

    // Two stacks: one for values and one for operators
    stack<string> val;
    stack<char> op;

    for (int i = 0; i < s.length(); i++) {
        // Check if s[i] is a digit (0-9)
        int ascii = (int)(s[i]); // Using ASCII value for digit check
        if (ascii >= 48 && ascii <= 57) {
            val.push(to_string (s[i] - 48)); 
        } 
        else { // s[i] is an operator
            if (op.size() == 0) op.push(s[i]);
            else if(s[i]=='(')op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    // work
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top(); 
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.pop(); // opening bracket pop
            }
            else if (prio(s[i]) > prio(op.top())) op.push(s[i]);
            else {
                while (op.size() > 0 && prio(s[i]) <= prio(op.top())) {
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top(); val.pop();
                    string val1 = val.top(); val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }

    // Process remaining operators in the stack
    while (op.size() > 0) {
        char ch = op.top(); op.pop();
        string val2 = val.top(); val.pop();
        string val1 = val.top(); val.pop();
        string ans = solve(val1, val2, ch);
        val.push(ans);
    }

    // Final result
    cout << val.top();

    return 0;
}