#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<< v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    // Reverse the array without using a another array

    
    vector<int>v;  //size  capacity
    v.push_back(6); // 1  1 
    v.push_back(1); // 2  2
    v.push_back(8); // 3  4
    v.push_back(3); // 4  4
    v.push_back(9); // 5  8
    v.push_back(1); // 6  8
    v.push_back(5); // 7  8

    display(v);

    // Reverse
    int i = 0;
    int j = v.size()-1;
    while(i<=j){
        // swap v[i] and v[j]
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    display(v);

    // using for loop
    for(int i=0,j=v.size()-1; i<=j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
   
}