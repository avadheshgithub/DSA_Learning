#include<iostream>
using namespace std;
#include<vector>

// note :- even after pop_back ---> vector capacity don't decrease with vector size

int main(){

    vector<int>vec;  //size  capacity
    vec.push_back(6); // 1  1 
    vec.push_back(1); // 2  2
    vec.push_back(8); // 3  4
    vec.push_back(3); // 4  4
    vec.push_back(6); // 5  8
    vec.push_back(1); // 6  8
    vec.push_back(6); // 7  8
    vec.push_back(1); // 8  8
    vec.push_back(8); // 9  16
    vec.push_back(3); // 10 16
    vec.push_back(6); // 11 16
    vec.push_back(1); // 12 17

    cout<<"after push_back , elements"<<endl;
    cout<<"Vector size : "<< vec.size()<<" but vector capacity : "<< vec.capacity()<<endl;

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    vec.pop_back(); // last element removed
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();

    cout<<"after pop_back , elements"<<endl;
    cout<<"Vector size : "<< vec.size()<<" but vector capacity : "<< vec.capacity()<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}