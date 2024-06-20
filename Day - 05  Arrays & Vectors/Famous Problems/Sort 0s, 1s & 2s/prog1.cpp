#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

}

void sort(vector<int>& nums) {
        int n = nums.size();
        int noz = 0;
        int noo = 0;
        int noT = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) noz++;
            else if(nums[i]==1) noo++;
            else noT++;
        } 
        for(int i=0;i<n;i++){
            if(i<noz) nums[i]=0;
            else if(i<(noz+noo)) nums[i] = 1;
            else nums[i] = 2;
        }
}
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

     // first methode to solve this question

    display(v);
    sort(v);
    display(v);
}