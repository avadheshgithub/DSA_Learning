/*

Q() Sum of square number

    # if it possible then A^2 + B^2 = C
    # C is gievn to you 
    # if possible then return true else false

    # Ex => 4*4 + 5*5 = 41 true


*/

// MEthode 01 (Time Complexity O(n/2))
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int n){
        int root = sqrt(n);
        if(root*root==n) return true;
        else return false;
    }
    bool judgeSquareSum(int c) {
        int x = 0;
        int  y = c;
        while(x<=y){
            if(isPerfectSquare(x)&& isPerfectSquare(y)){
                return true;
            }
            x++;
            y--;
        }
        return false;
    }
};



// Methode 02 (Time Complexity O(✓n))
class Solution {
public:
    bool isPerfectSquare(int n){
        int root = sqrt(n);
        if(root*root==n) return true;
        else return false;
    }
    bool judgeSquareSum(int c) {
        int x = 0;
        int  y = c;
        while(x<=y){
            if(isPerfectSquare(x)&& isPerfectSquare(y)){
                return true;
            }
            else if(!isPerfectSquare(y)){ // y is not perfect square so makeitPerfectSquare
                y = (int)sqrt(y)*(int)sqrt(y);
                x = c-y;
            }
            else { // x is not perfect square so make it perfectSquare
                x= ((int)sqrt(x)+1)*((int)sqrt(x)+1);
                y = c-x;
            }
        }
        return false;
    }
};
