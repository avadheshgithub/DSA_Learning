#include<iostream>
#include<vector>
using namespace std;
/*
    using of 2d vector instead of using 2d array
         1. no need to declare size
         2. its length can be easily get
         3. 

*/

// passed by reference

void change2dVector(vector<vector<int>> &v){ // no need to declare size
    v[0][1]= 100;
}

void length(vector<vector<int>> &v){ // size can be easily
    cout<<v.size()<<endl;
}
int main(){
    vector<int>v1;
   v1.push_back(1);
   v1.push_back(2);
   v1.push_back(3);

   vector<int>v2;
   v2.push_back(4);
   v2.push_back(5);

   vector<int>v3;
   v3.push_back(6);
   v3.push_back(7);
   v3.push_back(8);
   v3.push_back(9);
   v3.push_back(10);

    // 2D vector       size  1(idx 0) 2(idx 1)   3(idx 2)
   vector<vector<int>>v;  //{{1,2,3},{4,5},{6,7,8,9,10}}
   v.push_back(v1);
   v.push_back(v2);
   v.push_back(v3);

    cout<<v[0][1]<<endl;//2
    change2dVector(v);
    cout<<v[0][1]<<endl; //100

    length(v); //3


}