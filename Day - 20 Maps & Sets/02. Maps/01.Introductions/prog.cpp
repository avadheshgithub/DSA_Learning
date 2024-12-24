/*
        ## Maps ---> 

            1. Frequency array/set
            2. key, (value/index)

        ## 
            1. inserting - O(1);
            2. Seaching - O(1);
            3. deletion - O(1);

        ##
            1. insert();
            2. size();
            3. erase();
            4. count();

        ##
            pair<string,int>p;  // Pair
            p.first = "Avadhesh";
            p.second = 4;
            cout<<p.first<<" "<<p.second<<endl;


*/

#include<iostream>
#include<unordered_map>
#include<map> // this is the different 
using namespace std;

int main(){
    unordered_map<string,int>m; //Key and value

    pair<string,int>p1;  //Insertion
    p1.first = "AVadhesh";
    p1.second = 4;
    m.insert(p1);

    pair<string,int>p2;
    p2.first = "Amit";
    p2.second = 9;
    m.insert(p2);

    pair<string,int>p3;
    p3.first = "Amrita";
    p3.second = 6;
    m.insert(p3);

    for(pair<string,int> p:m){ // display
        cout<<p.first<<" "<<p.second<<" ";
        cout<<endl;
    } cout<<endl;

    m["rajesh"] = 15; //Insertion
    m["Anita"] = 20;

    m.erase("AVadhesh");  // erase

    cout<<m.size()<<endl; // 4

    for(auto p:m){                               // display
        cout<<p.first<< " "<<p.second<<" ";
        cout<<endl;
    }

    cout<<m["Anita"]; // 20 value

   // if (m.find(key)!=m.end()){   // FInd
    
   // }
}