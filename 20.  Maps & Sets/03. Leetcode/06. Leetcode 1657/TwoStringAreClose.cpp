/*
        ## Determine if two strings are close      [Leetcode - 1657]


        (1)
            Input: word1 = "abc", word2 = "bca"
            Output: true

            Explanation: You can attain word2 from word1 in 2 operations.
            Apply Operation 1: "abc" -> "acb"
            Apply Operation 1: "acb" -> "bca"
        
        (2) 
            Input: word1 = "cabbba", word2 = "abbccc"
            Output: true
            Explanation: You can attain word2 from word1 in 3 operations.
            Apply Operation 1: "cabbba" -> "caabbb"
            Apply Operation 2: "caabbb" -> "baaccc"
            Apply Operation 2: "baaccc" -> "abbccc"

    
    ## Solution -

        Ex. aabbcddde        eeddcccab
            
            a-2                a-1
            b-2                b-1
            c-1                c-3
            d-3                d-2
            e-1                e-2
        ------------       ---------------
            Map1              Map2

        
         now main ele = map. second (Counting frequency)

            (3,1)             (2,2)
            (1,2)             (3,1)
            (2,2)             (1,2)
        -------------     --------------
            Helper1            helper2

        
        # CHeck if both maps are equal then return true;
*/

/*class Solution {
public:
    bool closeStrings(string str1, string str2) {
        if(str1.length()!=str2.length()) return false;
        unordered_map<char,int>mp1,mp2;
        for(int i=0;i<str1.length();i++){
            mp1[str1[i]]++;
            mp2[str2[i]]++;
        }
        // Comparing map1 and map 2 (Only chars)
        for(auto x:mp1){
            char ch = x.first;
            if(mp2.find(ch)==mp2.end()) return false;
        }
        unordered_map<int,int>h1,h2; // h1-->helper1 and h2-->helper2
        for(auto x:mp1){
            int freq = x.second;
            h1[freq]++;
        }
        for(auto x:mp2){
            int freq = x.second;
            h2[freq]++;
        }
        // Comparing helper 1 and helper 2 maps
        for(auto x:h1){
            int key = x.first;
            if(h2.find(key)==h2.end()) return false;
            if(h2[key]!=h1[key]) return false;
        }
        return true;
    }
};*/
