/*
         ## Group Anagrams             [Leetcode 49]

         Example 1:

        Input: strs = ["eat","tea","tan","ate","nat","bat"]

        Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
    

    Solution - O(nlogn)-->Sort + O(n)--> map  ==== Total O(n.klogk);
            - SC. O(n*k)

        hash map
        unorderd_map<string,vector<string>mp 

        1. each string sort and insert into map as string and in vector sec,there would be orgional string
        2. now next string sort and check into map
        3. if there is . then push_back its origional string into vector
*/

/*class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(string str:arr){
            string lexo = str;
            sort(lexo.begin(),lexo.end());
            if(mp.find(lexo)==mp.end()){
                vector<string>v;
                v.push_back(str);
                mp[lexo] = v;
            }
            else{
                mp[lexo].push_back(str);
            }
        }
        for(auto x:mp){
            vector<string>v = x.second;
            ans.push_back(v);
        }
        return ans;
    }
};*/