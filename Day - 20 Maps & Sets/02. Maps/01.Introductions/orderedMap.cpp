/*

        ## Ordered amp :- 

            1. it store in asscending order according to key;
        
            orderd_map<int,int>m;

        ## DISADVATaGE

            1. insertion- O(logn)
            2. deletion - O(logn)
            3. searching - O(logn)


*/
#include<iostream>
#include<map> // Ordered map
using namespace std;

int main(){
    map<int,int>m; // sorting based on key
    m[1]= 10;
    m[3] = 30;
    m[4] = 40;
    m[2] =20;
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;

    cout<<m.size()<<endl; //4
    m.erase(4); //key

    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;

    map<string,int>m1; // sorting based on lexographic order in string
    m1["Avadhesh"]= 10;
    m1["Amit"] = 30;
    m1["Amrita"] = 40;
    m1["Anita"] =20;
    for(auto x:m1){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;

    
}