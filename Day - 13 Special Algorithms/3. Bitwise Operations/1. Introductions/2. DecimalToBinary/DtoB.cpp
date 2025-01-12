
/*
    ## Decimal to Binary

    Steps
        1. n/2 ==> remainder && append into string
        2. After division, get value/2 ==> remainder && same process
*/

#include <iostream>
#include <string>
using namespace std;

string Decimal_to_Binary(int num) {
    string result = "";
    while (num > 0) {
        if (num % 2 == 0) 
            result = "0" + result; // even
        else 
            result = "1" + result; // odd
        num = num / 2;  // num = num>>1  (right shift 1)
    }
    return result;
}

int main() {
    int num = 13;
    cout << Decimal_to_Binary(num) << endl;
    return 0;
}
