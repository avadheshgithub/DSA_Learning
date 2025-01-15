/*
        ## Print subsets of a string containing duplicate characters

        string str = "aba"

        ans = "", a,b,a,ab,aa,ba,aba
        #             *        *

        * --> duplicates coming so avoid same substes because subsets doesn;t maatter order

        ans  = ",",'a','b','ab','aa','aba'  (num of substes --> 6)

    
                                    " " / "aab"

                  "a"/"ab"                                 ""/"ab"
  
        "aa"/"b"           "a"/"b"              "a"/"b"              ""/"b"

    "aab"/""  "aa"/""   "ab"/""  "a"/""      "ab"/""   "a"/""     "b"/""   ""/""

    #   Repeated                              *         *  


        1. sort the string
        2. perfom same algo as we discussed for calculating all substes of string
        3. 
*/

#include<iostream>
#include<vector>
using namespace std;

void storeSubset(string ans, string origional,vector<string>& v,bool flag){ 
    if(origional==""){
        v.push_back(ans);
        return;
    }
    char ch = origional[0];
    if(origional.length()==1){
        if(flag==true)storeSubset(ans+ch,origional.substr(1),v,true);
        storeSubset(ans,origional.substr(1),v,true);
        return;
    }
    char dh = origional[1];
    if(ch==dh){
        if(flag==true) storeSubset(ans+ch,origional.substr(1),v,true);
        storeSubset(ans,origional.substr(1),v,false);
    }
    else{
        if(flag==true) storeSubset(ans+ch,origional.substr(1),v,true);
        storeSubset(ans,origional.substr(1),v,true);
    }
}

int main(){
    string str = "aab";
    vector<string>v;
    storeSubset("",str,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
