/*
        ## Binary to decimal 

        (MSB)             LSB 
        - - - - - - - - - - -  

        first digit --> MSB--> most significant bit
        last digit --> LSB --> least signifiacant bit


    EX -

        (1234) base 10

        1*1000 + 2*100 + 3*10 + 4
        
        1  2   3    4   
        
        # (1--> MSB)
        # (4--> LSB)

    EX-
        (001101)base 2

        char   0  0  1  1  0  1
        ---------------------------
        idx    0  1  2  3  4  5

        0*10^5 + 0*10^4 + 1*10^3

        from last
         sum += (char*2^(n-idx-1))


        2^(N-idx-1) => 
            
            2^0 = 1
            2^1 = 1 0
            2^2 = 1 0 0
            2^3 = 1 0 0 0
            2^4 = 1 0 0 0 0
            2^5 = 1 0 0 0 0 0

        hint -> one && none or sone zero

            it can be get bye  left size operator
                
                1<<x       
*/
#include<iostream>
using namespace std;

int binary_to_decimal(string &binary){
    int n = binary.size();
    int result = 0;
    for(int i=n-1;i>=0;i--){
        char ch = binary[i];
        int num = ch-'0'; // convert into number
        result = result+num*(1<<(n-i-1));
    }
    return result;
}

int main(){
    string str = "001101";
    cout<<binary_to_decimal(str)<<endl;

}