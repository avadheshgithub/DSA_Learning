#include<iostream>
using namespace std;
#include<vector>

/*
 vec size  & vec capacity  -- both are not same
*/


int main(){

    vector<int>vec;
    vec.push_back(6);
   
    cout<<"Vector Size :- "<<vec.size()<<endl;

    return 0;
}