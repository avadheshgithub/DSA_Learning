#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

}


void sort01m2(vector<int>& v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        else if(v[i]==0 && v[j]==1){
            v[i]= 0;
            v[j] = 1;
            i++;
            j--;
        }
    }

}

int main(){
    /*
    
       Q(1)  Sort the array of 0's and 1's in a given array
       Q(2) move all the negative numbers to beginninf and positive to end with constant extra place

    */

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
    
    /*
    
     -----------------------------------------------------------------------------------------------
     2nd methode(using two pointer) to solve this question
      take two pointer 
      i=o, j=n-1, while(i<j){
            if(arr[j]==1) j--
            if(arr[i]==0) i++
            if(arr[i]==1 && arr[j]==0){   // use else if // write third statement above the another two
                swap()                    // after two statements write a condition--> if(i>j) break;
                i++;
                j--;
            }
      }
    
    */
    sort01m2(v);
    display(v);

    return 0;
}