#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>& v){
    int n = v.size();
    int noz = 0;
    int noo = 0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else noo++ ;
    }
    // data overhiding (Elements filling)
    for(int i=0;i<n;i++){
        if(i<noz) v[i]=0;
        else v[i]=1;
    }
}

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

}

int main(){

    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);

    display(v);

    sort(v);
    display(v);
}
