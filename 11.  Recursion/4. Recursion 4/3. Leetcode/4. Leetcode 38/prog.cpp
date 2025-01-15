/*
    ## count and say       [Leetcode 38]

    
    ## n = "3322251;
        say - two 3's ,  three 2's  ,  one 5  , one 1
        now --> 2 3 + 3 2 + 1 5 + 1 1
        now ans  => 23321511 

    ## cout & say --> cas

            cas(n) = the way you would speak cas (n-1)

            cas(1) = "1"
            cas(2) = one 1 -> "11"
            cas(3) = two 1 -> "21"
            cas(4) = "1211"
            cas(5) = "111221"
            cas(6) = "312211"
*/


//-----------------------------LEETCODE SOL------------------------------------

/*class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string str = countAndSay(n-1);

        // str = 3322251 ---> 23 32 15 11 (freq & char)
        string ztr = "";
        int freq=1;
        char ch = str[0];
        for(int i=1;i<str.length();i++){
            char dh = str[i];
            if(ch==dh){
                freq++;
            }
            else{ // ch!=dh
                ztr+=(to_string(freq)+ch); // freq and char
                freq=1;
                ch = dh;
            }
        }
        ztr+=(to_string(freq)+ch); // for last 11 after loop
        return ztr;
    }
};*/