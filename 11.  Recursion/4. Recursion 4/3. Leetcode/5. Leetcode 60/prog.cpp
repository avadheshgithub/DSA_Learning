/*
        ## Permutations sequence            [Leetcode 60]
*/


//-------------------------SOL 1 (TIME LIMIT EXCEED)---------------------------
/*class Solution {
public:
    void permutations(vector<string>& v,string ans,string origional){
        if(origional==""){
            v.push_back(ans);
            return;
        }
        for(int i=0;i<origional.length();i++){
            char ch = origional[i];
            string left = origional.substr(0,i);
            string right = origional.substr(i+1);
            permutations(v,ans+ch,left+right);
        }
    }
    string getPermutation(int n, int k) {
        string str = "";
        for(int i=1;i<=n;i++){
            str += to_string(i);
        }
        vector<string>v;
        permutations(v,"",str);
        return v[k-1];
    }
};*/


//----------------------SOL 2 LEETCODe --------------------------------------------
/*class Solution {
public:
    string helper(string str,int k,string ans){
        int n = str.length();
        if (n == 0) return ans;
        int fact = 1;
        for (int i = 2; i <= n - 1; i++) fact *= i; // Calculate (n-1)!
        int idx = (k - 1) / fact;         // Adjust `k` to 0-based indexing
        char ch = str[idx];               // Character to include in `ans`
        string left = str.substr(0, idx); // Left part 
        string right = str.substr(idx + 1); // Right part 
        int new_k = k - (idx * fact);       // Update `k` for next level of recu
        return helper(left + right, new_k, ans + ch); // Recurse wi
    }
    
    string getPermutation(int n, int k) {
        string str = "";
        for(int i=1;i<=n;i++){
            str += to_string(i);
        }
        return helper(str,k,"");
    }
};*/