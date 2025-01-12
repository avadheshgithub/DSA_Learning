/*
    ## Count Inversions 

        1. two elements of an array a,a[i] and a[j]. form an inversion if a[i]>a[j] and i<j. given an array of integers . find the inversion count in the array

        5  1  8  2  3

        inversiona like (5,1) (5,2) (5,3) (8,2) (8,3);

    # Methode 01 --> Brute Force 
        1. TC - O(n^2)
        2. SC - O(1)
        
        int count=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
            if(a[i]>a[j])} count++;
        }

    ## Methode 02 --> optimal solution (devide and Concquer)

        1. if we have two sorted sub arrray
        2. {3,5,6,7}    {8,9,10};

        i=0 and another sub array all big than first subArray sor count incre by size of second sub array each time
         
        count = 0/  4/  8
*/

#include<iostream>
#include<vector>
using namespace std;
int cnt=0;

void merge(vector<int>& a,vector<int>& b, vector<int>& res){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j])res[k++]=a[i++];
        else res[k++]=b[j++]; // b[j]<=a[i]
    }
    if(i==a.size())while(j<b.size()) res[k++] = b[j++];
    if(j==b.size())while(i<a.size()) res[k++] = a[i++];
}

int inversion(vector<int>& a, vector<int>& b){
    int count = 0;
    int i=0;//a
    int j=0;//b
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]) {
            count+= a.size()-i;
            j++;
        }
        else i++;
    }
    return count;

}
void mergeSort(vector<int>& v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2, n2 = n-n/2;
    vector<int>a(n1);
    vector<int>b(n2); 
    // copy elements
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i] =v[i+n1];
    }
    // magic --> recursion
    mergeSort(a);
    mergeSort(b);
    // count the inversions 
    cnt+=inversion(a,b);
    merge(a,b,v);
    a.clear(); // Extra vector space deleted
    b.clear(); // again  --> now SC = O(n)

}

int main(){
    int arr[] ={5,1,3,0,4,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    mergeSort(v);
    cout<<cnt<<endl;
}