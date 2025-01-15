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
    vec.push_back(6); // 5  8
    vec.push_back(1); // 6  8
    vec.push_back(6); // 7  8

    cout<<"Elements before sorting :"<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    // use sort function (Noote :- please include <algorithem> header)

    cout<<"Elements before sorting :"<<endl;
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

    return 0;
}