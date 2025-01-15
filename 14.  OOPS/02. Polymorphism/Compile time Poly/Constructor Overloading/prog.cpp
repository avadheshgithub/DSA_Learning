/*

## Constructor overloading :- Very similar to the function overloding.

    #   - same function name but parameter should diff
        - num of parameter change
        - type of paramter should be change
        - resualble

*/

#include<iostream>
using namespace std;

class addition{
public:
    int avalue;
    int bvalue;
    
    addition(int a, int b) : avalue(a),bvalue(b){} // Same Constructor
    addition(int a): avalue(a),bvalue(15){}       // Same COnstructor    ===== Diff PArameter
    addition():avalue(12),bvalue(15){}            // Same Constructor
};

int main(){
    addition sum (12,15);
    addition plus (12);
    addition jod();
}

