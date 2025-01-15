/*
        ## Print subsets  

        Num of substes - 2^n

        string str = "abc"

        subsets - a,b,c,ab,ac,bc,abc," "

        ## Recursion - two call --> 
               1. append   2. not append 
               (both case -> omit 1 char)


                                    " " / "abc"

                  "a"/"bc"                                 ""/"bc"
  
        "ab"/"c"           "a"/"c"              "b"/"c"              ""/"c"

    "abc"/""  "ab"/""   "ac"/""  "a"/""      "bc"/""   "b"/""     "c"/""   ""/""

    base case - when origional string become empty
    ans at last --> all subsets are 
*/


#include<iostream>
#include<vector>
using namespace std;

void printSubset(string ans, string origional){ // stirng modieifed
    if(origional==""){
        cout<<ans<<endl;
        return;
    }
    char ch = origional[0];
    printSubset(ans+ch,origional.substr(1));
    printSubset(ans,origional.substr(1));
}

void printSubset2(string ans, string origional,int idx){ // string not modified
    if(idx==origional.length()){
        cout<<ans<<endl;
        return;
    }
    char ch = origional[idx];
    printSubset2(ans+ch,origional,idx+1);
    printSubset2(ans,origional,idx+1);
}

void storeSubset(string ans, string origional,vector<string>& v){ 
    if(origional==""){
        v.push_back(ans);
        return;
    }
    char ch = origional[0];
    storeSubset(ans+ch,origional.substr(1),v);
    storeSubset(ans,origional.substr(1),v);
}

int main(){
    string str = "abc";
    printSubset2("",str,0);

    vector<string>v;
    storeSubset("",str,v);
    for(string ele:v) cout<<ele<<endl;
}
