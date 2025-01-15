/*
        ## Generate parantheses            [Leetcode 22]

        Input: n = 3
        Output: ["((()))","(()())","(())()","()(())","()()()"]

        Input: n = 1
        Output: ["()"]



        ## Approach 1  Well Formed paranthesis

            n=1  ()

            --> one more parenthsis either in side or sormout (cover kr do)

            n=2  ()()  (())
                left   sormout

            n=3  ()()()  (()())  ()(())  (())()  ((()))
                 left     sormout  left   right    sormout


        ## Aprroach 2

            at every instant, no of opening bracket >= no of closing bracket

            n = 3      (((  )))
       
            left side = opening bracket
            right side = closing bracket

--------------------------------------------------------------------------------
                                     str op cl n
                                     "", 0, 0, 3
                                   /            \
                             "(",1,0,3             Not possible
                          /              \
                "((",1,0,3                     (),1,1,3
                /       \                       /       \
        "(((",3,0,3       ((),2,1,3           ()(,2,1,3  not possible
        /    \               /    \             /     \
not po  (((),3,1,3  (()(,3,1,3 (()),2,2,3  ()((,3,1,3  ()()2,2,3

----------------------------------------------------------------------------------

*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void generate(string s,int open,int close,int n){
    if(close==n){
        cout<<s<<endl;
        return;
    }
    if(open<n)generate(s+'(',open+1,close,n);
    if(close<open) generate(s+')',open,close+1,n);
}
int main(){
    int n = 5;
    generate("",0,0,n);
}


//--------------------------LEETCODE SOLUTION-----------------------------------
/*class Solution {
public:
    void generate(vector<string>& ans,string s, int open,int close,int n){
        if(close==n){
            ans.push_back(s);
            return;
        }
        if(open<n)generate(ans, s+'(',open+1,close,n);
        if(close<open) generate(ans, s+')',open,close+1,n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        generate(ans,"",0,0,n);
        return ans;
    }
};*/