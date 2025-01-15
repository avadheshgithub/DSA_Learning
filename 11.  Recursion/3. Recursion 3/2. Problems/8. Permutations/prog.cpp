/*
        ## finding all permutations of an string given all elements of the string are unique

        Ex - str= "abc"

        ans - abc,acb,bac,bca,cab,cba

        # number of calls = length of string and choose a character each call


                           
                                 ""/abc

            a/bc                   b/ac                 c/ab

        ab/c    ac/b          ba/c      bc/a        ca/b      cb/a

        abc/""   acb/""       bac/""     bca/""     cab/""    cba/""
*/

#include<iostream>
#include<vector>
using namespace std;


void permutations(string ans,string origional){
    if(origional==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<origional.length();i++){
        char ch = origional[i];
        string left = origional.substr(0,i);// from 0 to i legth ahead
        string right = origional.substr(i+1); // from i+1 to end length
        permutations(ans+ch,left+right);
    }
}

int main(){
    string str = "abc";
    permutations("",str);
}