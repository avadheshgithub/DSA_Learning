#include<iostream>
using namespace std;

// Question - given the sorted of non- negative different different integers, find the smallest missing non negative number/element in it


int main(){

    /* 1 Linear search methode ( Time Complexity O(n))

         idx       0 1 2 3 4 5 6 7
         arr [] = {0,1,2,3,4,8,9,12}

        */

        int arr[] = {0,1,2,3,4,8,9,12}; //ans = 5
        int n = 8;
        for (int i=0;i<n;i++){
            if(i!=arr[i]){
                cout<<i;
                break;
            }
        }



    // Binar Search (Time complexity - O(logn))


        int low = 0;
        int high = n-1;
        int ans = -1;
    
        while(low<=high){
            int mid = low+(high-low)/2;
            if(arr[mid]==mid) low = mid+1;
            else{
                ans = mid;
                high = mid-1;
            }
        }
        cout<<ans;



    
}