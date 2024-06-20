#include<iostream>
using namespace std;
#include<vector>

int main(){

    // 1st way (size was given)

    vector<int>vec(5);

    // input
    for(int i=0;i<5;i++){
        cin>>vec[i];
    }
    cout<<endl;

    // print the elements
    for(int i=0;i<5;i++){
        cin>>vec[i];
    }
    cout<<endl;




    // 2nd way (size was not given)
    vector<int>v;                   // initial size is  0

    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    return 0;
}