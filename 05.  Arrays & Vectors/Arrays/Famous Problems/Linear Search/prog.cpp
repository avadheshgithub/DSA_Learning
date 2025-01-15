#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the n value : ";
    cin>>n;

    int arr[n];
    // input
    cout<<"Enter the inputs : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // search element
    int s;
    cout<<"Enter the element which you want to search : ";
    cin>>s;

    bool flag = false;
    for(int i=0;i<n;i++){
       if(arr[i]==s){
        flag = true;
       }
    }
   if(flag == true) cout<<"Element found";
   else cout<<"Element not found ";

    return 0;
}