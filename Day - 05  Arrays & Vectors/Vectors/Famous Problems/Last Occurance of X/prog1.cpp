#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){

    vector<int>vec;  //size  capacity
    vec.push_back(6); // 1  1 
    vec.push_back(1); // 2  2
    vec.push_back(8); // 3  4
    vec.push_back(3); // 4  4
    vec.push_back(9); // 5  8
    vec.push_back(1); // 6  8
    vec.push_back(5); // 7  8

    int x = 1;
    int idx = -1;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==x) idx = i;

    }
    cout<<"the last occurance of x is "<<idx<<endl;

}