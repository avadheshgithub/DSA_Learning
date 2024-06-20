#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){

    int x;
    cout<<"Enter target : "<<endl;
    cin>>x;

    vector<int>v;
    int n;
    cout<<"Enter array size : ";
    cin>>n;

    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }

}