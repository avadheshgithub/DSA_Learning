/*
    PostFix EValuation     [val1 val2  op]
*/

#include <iostream>
#include <stack>
using namespace std;

int solve(int val1,int val2,char ch){
    if (ch == '+') return val1 + val2;
    else if (ch == '-') return val1 - val2;
    else if (ch == '*') return val1 * val2;
    else return val1 / val2; // Division
}

int main() {
    string s = "79+4*8/3-"; // Input expression

    // one stacks: one for eveluation
    stack<int> val;

    for (int i = 0; i < s.length(); i++) {
        // Check if s[i] is a digit (0-9)
        int ascii = (int)(s[i]); // Using ASCII value for digit check
        if (ascii >= 48 && ascii <= 57) {
            val.push(s[i] - 48); // Convert char to int using ASCII manipulation
        }
        else{ //s[i] it is --> *, /, +, -;
            // compute ans
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            int ans = solve(val1,val2,s[i]);
            val.push(ans);
        }
    }

    // Final result
    cout << val.top() << endl;

    return 0;
}
