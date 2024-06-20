#include<iostream>
#include<vector>
using namespace std;


void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void revsersepart(int i,int j,vector<int>&a){
    while(i<=j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

void fullreverse(vector<int>&b){
    int i = 0;
    int j = b.size()-1;
    while(i<=j){
        int temp = b[i];
        b[i] = b[j];
        b[j] = temp;
        i++;
        j--;
    }
}
int main(){
    /* 
    Q(4) rotate the given array 'a' by k steps, where k is non-negative

     (rotate it by k(2) steps --> last pick and put first same 2 times repeate)

        |1|6|2|3|7| -- |4|8|   (Origional) (total n element)  
        ----------     --------
        (n-k)element   k element

        reverse(0,n-k-1)  reverse (n-k,n-1)  
               idx  idx            idx  idx                     we have to k=2
 
        |7|3|2|6|1| -- |8|4|                
        --------------------
             Reverse
                        
        |4|8|1|6|2|3|7|     (Reversed by 2)
   */

    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(0);

    display(v);
    int n = v.size();

    int k = 2;
    if(k>n) k=k%n;

    // Reverse 1st part
    revsersepart(0,n-k-1,v);

    // Reverse 2nd part
    revsersepart(n-k,n-1,v);

    // Full reverse
    fullreverse(v);

    // display the result
    display(v);



}