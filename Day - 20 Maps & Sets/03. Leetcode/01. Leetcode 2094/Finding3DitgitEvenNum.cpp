/*
    ## Finding - 3 digit Even Numbers      [LEETCODE 2094]

    s = (2,1,3,0) ---> from 3 digit even num

    for(int i=100;i<=999;i+=2){
        -----
    }

    ## UnderStand COncept -
        1. i=100;
        x = i = 100;
        a = x%10 --> a = 0; --->VIMP
        x = x/10 --> x = 10;
        b = x%10 --> b = 0; ---> VIMP
        x = x/10 --> x = 1;
        c = x&10 --> c = 1; ---> VIMP

        now let check --> 100 can be formed by given array
        1. check a values in map --> if yes (Erase) and freq--;
        2. check b values in map --> if not then continue;

        for i=101;
        a=1;
        b=0;
        c=1;

        whatever we erased just again insert and foloow the similar process of checking
        1. check a values in map --> yes (erase) and freq--;
        2. check b value in map --> yes (erase);anf freq--;
        3. check c values in map --> no then continue

        for i=102
*/

/*class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans;
        unordered_map<int,int>m;
        for(int ele: arr){
            m[ele]++;
        }
        for(int i=100;i<999;i+=2){
            int x=i;
            int a = x%10;
            x/=10;
            int b = x%10;
            x/=10;
            int c = x;
            if(m.find(a) !=m.end()){
                m[a]--;
                if(m[a]==0) m.erase(a);
                if(m.find(b)!=m.end()){
                    m[b]--;
                    if(m[b]==0) m.erase(b);
                    if(m.find(c)!=m.end())ans.push_back(i);
                    m[b]++;
                }
                m[a]++;
            }
        }
        return ans;
    }
};*/