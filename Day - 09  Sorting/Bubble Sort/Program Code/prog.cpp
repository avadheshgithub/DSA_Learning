#include<iostream>
#include<vector>
using namespace std;

/*
    ## Time complexity : 
        
        1. Best case  :- O(n)
        2. avg case   :- O(n^2)
        4. Worst Case :- O(n^2)

    ## Space complexity : O(1)

*/

int main(){

    int arr[] = {5,4,3,2,1};

    // int n;
    int n = sizeof(arr)/sizeof(arr[0]);

    // print your array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    /* buble sort 
    for(int i=0;i<n-1;i++){    //  n-1 passes
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                swap(arr[j],arr[j+1]);
            }
        }
    }
    */


    // bubble sort Optimization
    for(int i=0;i<n-1;i++){    //  n-1 passes
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true){
            break;
        }
    }
    cout<<endl;

    cout<<"After the sorting :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}