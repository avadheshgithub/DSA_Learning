/*

    ## Problem Statement : (Leetcode 455)

        - there is a parent who have cookies and cookies Size are different

        - there have many childrens  & parent give them cookies 

        # Conditions :

            1.  parent can only give one cookies to one children.
            2. let if parent have 2 cookies of size 1 & 1 . O HE TRY TO distribute
            3. child_A want size 1 cookie then he gave but child_B & child_c Want 2 size & 3size cooki . so 
            4. he will be able to distribute only child_A
            5. so return 1  

    
    ## Impt info

        - there num of cookies & size of the cookies

        - Q is that in how many studnet , you can distribute your cookies (as per available number of cookies and size of the cookies)


    ## SOlutions :-

        greed army            cookie array
        10  9  8  7           5   6   7   8

        sort both
        7  8  9  7           5  6   7   8
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());// 7 8 9 10
        sort(s.begin(),s.end()); // 5 6 7 8

        int count = 0;
        int i = 0;
        int j = 0;
        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i]){
                count++;
                i++;
                j++;
            }
            else j++;
        }
        return count;
    }
};

