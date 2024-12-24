/*
    prefix to postfix 
*/

#include <iostream>
#include <stack>
using namespace std;

string solve(string val1,string val2,char ch){
    string s = "";
    s +=val1;
    s +=val2;
    s.push_back(ch);
    return s;
}

int main() {
    string s = "-/*+79483"; // Input expression

    // one stacks: one for eveluation
    stack<string> val;

    for (int i = s.length()-1; i >=0; i--) {
        // Check if s[i] is a digit (0-9)
        int ascii = (int)(s[i]); // Using ASCII value for digit check
        if (ascii >= 48 && ascii <= 57) {
            val.push(to_string(s[i] - 48)); // Convert char to int using ASCII manipulation
        }
        else{ //s[i] it is --> *, /, +, -;
            // compute ans
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = solve(val1,val2,s[i]);
            val.push(ans);
        }
    }

    // Final result
    cout << val.top() << endl;

    return 0;
}
