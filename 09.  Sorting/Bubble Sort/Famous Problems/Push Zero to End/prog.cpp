/*

Q() Push zeros to end while maintaining the relative order of other elements

     #       arr {5,0,1,2,0,0,4,0,3}

     #       ANS i need -> {5,1,2,4,3,0,0,0,0} (While maintaining relative order)


    Note - using two pointer what we are getting 

            1. Arr {5,3,1,2,4,0,0,0,0}
        
        but i need other which is given above array- 
        - becuase due to two pointer , we are not able to maintain their relative order

        
    ## Observation :-

        to maintian the relative order of the sorting , i need bubble sort rather using two pointers


*/

#include<iostream>
using namespace std;

int main(){
    int arr [] = {5,0,1,2,0,0,4,0,3};
    int n = 9;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    // bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
        }

    }

    // print the array after the sorting 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}