/*
    ## Cyclic sort - O(n) ---> but it is used in only special case

        identity --> always array 1 to n range

    # Working - 0(n)

        a = {5,1,2,4,3} and i at 0 index

        1.  5 should be at 5th pos and swap it wish last element
         
        a = {3,1,2,4,5}

        2. 3 should be 3rd pos so swap it with 3rd pso

        a = {2,1,3,4,5}

        3. 2 should be at 2nd pos so swap it with 2nd pos

        a = {1,2,3,4,5}

    
    ## Worst number of swaps --> n-1 swaps

*/

#include<iostream>
using namespace std;

int main(){
    int arr[] = {4,1,6,2,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // cyclic sort
    int i=0;
    while(i<n){
        int correctIdx = arr[i]-1;
        if(i==correctIdx)i++;
        else swap(arr[i],arr[correctIdx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}