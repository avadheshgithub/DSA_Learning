#include<iostream>
using namespace std;
#include<vector>

/*
 vec size  & vec capacity  -- both are not same
*/


int main(){

    vector<int>vec;
    vec.push_back(6);
   
    cout<<"Vector Capacity :- "<<vec.capacity()<<endl;

    return 0;
}