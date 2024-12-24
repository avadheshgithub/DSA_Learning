/*

        ## Sets - a data structure that contain unique values/elements 

                1. insert - O(1);
                2. search - O(1);
                3. delete - O(1);

        ##----------------------------------------------------------

                4. size()
                5. begin()
                6. end()
                7. erase()
                8.insert()
                9. find()

*/
#include<iostream>
#include<unordered_set> // Most used
#include<set>
using namespace std;

int main(){
        unordered_set<int>s;
        s.insert(1);
        s.insert(2);
        s.insert(3);
        s.insert(4);
        s.insert(5);
        s.insert(5); // it contain only unique values

        // All these stored in a random order stored

        //display
        for(int ele:s){
                cout<<ele<<" ";
        }
        cout<<endl;

        for(auto ele:s){
                cout<<ele<<" ";
        }
        cout<<endl;

        cout<<s.size()<<endl; // 5
        s.erase(5);
        cout<<s.size()<<endl; //4

        int target = 4;
        if(s.find(target)!=s.end()){ // Targte Exiest
                cout<<"Exisest"<<endl;
        }
        target = 40;
        if(s.find(target)==s.end()){ // Targte doesn't  exiest Exiest
                cout<<"TRUE"<<endl;
        }

        // s.find() --> it search in the set and if it not found then it return the last element

}


