#include<iostream>
using namespace std;

int main(){
    int m;
   cout<<"Enter the number of rows:";
   cin>>m;

   int n;
   cout<<"Enter the number of columns:";
   cin>>m;
   
   cout<<"Enter the element in 2D array:";
   int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Finding the min element in 2d array:";
    int min = arr[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }
    cout<<min;
}