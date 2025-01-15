#include<iostream>
#include<vector>
using namespace std;

int main(){
/*
    
            declaration of 2d vector with size
             ---------------------------------------


        1. vector<vector<int> >v;

        2. vector<vector<int>>v(m);  m is the size which inside many vectors

        3. vector<vector<int>>v(m,vector<int>(n));  m--row num | n-->column num

        4. vector<vector<int>>v(m,vector<int>(n,k));

    
    */


   // methode 01 
  
   vector<vector<int>>v = {{1, 2, 3}, {4, 5}, {6, 7, 8, 9, 10}};


   // methode 02
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

   vector<vector<int>>v;
   v.push_back(v1);
   v.push_back(v2);
   v.push_back(v3);


   // methode 03
   int m;
   cout<<"Enter row value";
   cin>>m;

   int n;
   cout<<"Enter column value:";
   cin>>n;

   vector<vector<int>>v(m,vector<int>(n));  


   // methode 04
   vector<vector<int>> v(3); // m is the size which inside many vectors


   // methode 05
    vector<vector<int>>v(m,vector<int>(n,5)); // all value is 5

}