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

    // Reverse the array using a another array

    
    vector<int>v1;  //size  capacity
    v1.push_back(6); // 1  1 
    v1.push_back(1); // 2  2
    v1.push_back(8); // 3  4
    v1.push_back(3); // 4  4
    v1.push_back(9); // 5  8
    v1.push_back(1); // 6  8
    v1.push_back(5); // 7  8

   display(v1);

   vector<int>v2(v1.size());
   for(int i=0;i<v2.size();i++){
        v2[i] = v1[v1.size()-1-i];
   }
   display(v2);


}