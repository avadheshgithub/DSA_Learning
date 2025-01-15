/*

        ## Ordered Set :- 

            1. Contain only unique elements
            2. it store in asscending order;
        
            orderd_set<int>s;
            s.insert(1);
            s.insert(9);
            s.insert(2)
            s.insert(11);

            -----------------
             1  2   9   11
            -----------------

        ## DISADVATaGE

            1. insertion- O(logn)
            2. deletion - O(logn)
            3. searching - O(logn)


*/
#include<iostream>
#include<set> // Ordered set
#include<map> // Ordered map
using namespace std;

int main(){
    set<int>s;
    s.insert(1);
    s.insert(11);
    s.insert(3);
    s.insert(-1);
    s.insert(3);

    for(auto x:s){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<s.size()<<endl;
    s.erase(-1);

    for(auto x:s){
        cout<<x<<" ";
    }
    cout<<endl;

    
}