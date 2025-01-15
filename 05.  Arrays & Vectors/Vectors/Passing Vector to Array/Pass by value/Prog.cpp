#include<iostream>
using namespace std;
#include<vector>

// check - vector (pass by value or pass by reference)

// not :- vector are passed by value  :- each time you pass, new vector is created

void change(vector<int>v){
    v[0] = 100; 
    cout<<"Elements are :"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;              

}

int main(){

     vector<int>vec;  //size  capacity
    vec.push_back(6); // 1  1 
    vec.push_back(1); // 2  2
    vec.push_back(8); // 3  4
    vec.push_back(3); // 4  4
    vec.push_back(6); // 5  8
    vec.push_back(1); // 6  8
    vec.push_back(6); // 7  8

    cout<<"Elements are :"<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;


    // after change
    change(vec);                  // not changed (pass by value)
    cout<<"Elements are :"<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    return 0;
}