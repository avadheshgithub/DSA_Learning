/*

        ## Data2 Senate          [Leetcode 649]


                    idx    0   1   2   3    4    5    6
                    str    R   D   R   D    D    D    R
                
    deque<int>q  ----> push the indexes
    deque<int>r  ----> push rhe R indexs
    deque<int>d  ----> push the D indexs

*/

/*class Solution {
public:
    string predictPartyVictory(string s) {
        queue<int>q;
        queue<int>r;
        queue<int>d;
        for(int i=0;i<s.length();i++){
            q.push(i);
            if(s[i]=='R') r.push(i);
            else d.push(i);
        }
        while(q.size()>1){
            if(s[q.front()]=='X') q.pop();
            else if(s[q.front()]=='R'){
                // checkfor victory
                if(d.size()==0) return "Radiant";
                else{
                    // take the rights of next D
                    s[d.front()]='X';
                    d.pop();
                    //work is done
                    q.push(q.front());
                    q.pop();
                    r.push(r.front());
                    r.pop();
                }
            }
            else{ // s[q.front()]=='D
                //check for the victory
                if(r.size()==0) return "Dire";
                else{ // take the rights of next R
                    s[r.front()]='X';
                    r.pop();
                    //work is done
                    q.push(q.front());
                    q.pop();
                    d.push(d.front());
                    d.pop();
                }
            }
        }
        if(s[q.front()]=='R') return "Radiant";
        else return "Dire";
    }
};*/