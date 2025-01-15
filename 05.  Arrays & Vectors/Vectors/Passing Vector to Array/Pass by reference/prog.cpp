#include<iostream>
using namespace std;
#include<vector>

// vector (pass by value And pass by reference(using &))

// not :- vector are passed by value  :- each time you pass, new vector is created
//        for pass by reference  - you have to use amphercent operator (&)

void change(vector<int>&v){
    v[0] = 100;             
}

void display(vector<int>&vec){
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
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
    display(vec);

    // after change
    change(vec);                  //  changed (passed by reference) using &
   
    display(vec);

    return 0;
}