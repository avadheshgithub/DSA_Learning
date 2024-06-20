#include<iostream>
using namespace std;
#include<vector>

int main(){

    vector<int>vec;  //size  capacity
    vec.push_back(6); // 1  1 
    vec.push_back(1); // 2  2
    vec.push_back(8); // 3  4
    vec.push_back(3); // 4  4
    vec.push_back(6); // 5  8
    vec.push_back(1); // 6  8
    vec.push_back(6); // 7  8

    // acess elements using at
    for(int i=0;i<vec.size();i++){
        cout<<vec.at(i)<<" ";
    }
    return 0;
}