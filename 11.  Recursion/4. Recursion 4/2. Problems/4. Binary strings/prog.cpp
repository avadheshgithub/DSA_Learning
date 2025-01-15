/*
        ## Generate all Binary strings of length n without consecutive 1's

        Binary strings length=2

            "00", "01", "10","11"

        - condition -->  without 1's

                    left side = 0
                    right side = 1

------------------------------------------------------------------------

                            ""
                 0                              1
          00           01                 10           11
      000    001    010   011          100   101     110  111
#                          *                         *      *
--------------------------------------------------------------------------

*/

#include<iostream>
using namespace std;


void binaryString(string s,int n){ // generate all binary strings
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    binaryString(s+'0',n);
    binaryString(s+'1',n);
}

void generate(string s,int n){ // generate only strings that satisfy condition
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    generate(s+'0',n); // always will run this
    if(s=="" || s[s.length()-1]=='0')generate(s+'1',n);
}

int main(){
    // int size=3;
    binaryString("",3);
    generate("",3);
}