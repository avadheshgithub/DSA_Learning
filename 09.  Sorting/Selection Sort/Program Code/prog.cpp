#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {5,3,1,4,2};

    int n = 5;

    // for each loop  
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    // Selection sort
    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindx = -1;
        // min element
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        // swap
        swap(arr[i],arr[mindx]);

    }

    cout<<"After the selections sort"<<endl;
    // for each loop  
    for(int ele:arr){
        cout<<ele<<" ";
    }


    /*
    
    ## Time complexity :- 

        1. Best Case : O(n^2)
        2. Avg Case  : O(n^2)
        3. Worst Case : O(n^2)


    ## Space Complexity :- O(1)
    
    */

}