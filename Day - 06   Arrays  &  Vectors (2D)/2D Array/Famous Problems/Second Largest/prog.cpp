#include<iostream>
using namespace std;

int main(){

    // find the second largest element in the 2d array
   
   int m;
    cout<<"Enter m value : ";
    cin>>m;

    int n;
    cout<<"Enter n value : ";
    cin>>n;

    int arr[m][n];

    // input
    cout<<"Enter the elements :";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // print max
    int max = INT32_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]) max = arr[i][j];
        }
    }
    cout<<"the max element is : "<<max<<endl;


    int sec_max = INT32_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>sec_max && arr[i][j] != max){
                sec_max = arr[i][j];
            }
        }
    }
    cout<<"The second largest element is : "<<sec_max;
    return 0;
}