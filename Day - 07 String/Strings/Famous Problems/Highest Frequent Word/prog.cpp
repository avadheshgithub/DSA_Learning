#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

int main(){

    //Q(02) given a sentence str and return the word that is occuring most number of times in that sentence

    string s = "raghav is a math teacher. he is a dsa mentor as well ";
    stringstream ss(s);
    string temp;
    vector<string>vec;
    while(ss>>temp){
        vec.push_back(temp);
    }

    sort(vec.begin(),vec.end());
    
    // find the most frequeent word and print that word

    int maxcount =1;
    int count =1;
    for(int i=1;i<vec.size();i++){
        if(vec[i]==vec[i-1]) count++;
        else count=1;
        maxcount = max(maxcount,count);
    }
    cout<<"maxcount : "<<maxcount<<endl;

    // print that word
    count =1;
    for(int i=1;i<vec.size();i++){
        if(vec[i]==vec[i-1]) count++;
        else count=1;
        if(count==maxcount){
        cout<<vec[i]<<" - "<<maxcount<<endl;;
       }
    }
}