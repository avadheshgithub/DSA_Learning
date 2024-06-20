#include<iostream>
using namespace std;

int main(){


    // (1) Declaration

    int arr[5]; // seven boxes created (type - integer)

//-----------------------------------------------------------

    // (2) initialize
   arr[3] = 5;
   arr[2] = 1;

//------------------------------------------------------------

   // (3) Declaration & initilization both
   int nums[5] = {1,2,3,4,5};
   int arr2[] = {1,2,3,4,5,6} ;// true
   //int arr3 []; // Error

   cout<<nums[3]<<endl;

// -----------------------------------------------------------

    // (3) Access the element
    nums[2];

    for(int i=0;i<5;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;


    // (4) Take the input from the user & print output
    int nums2[7];
    for(int i=0;i<=6;i++){
        cout<<"Enter your "<<i<<"th element : ";
        cin>>nums2[i];
    }

    for(int i=0;i<7;i++){
        cout<<nums2[i]<<" ";
    }
    cout<<endl;

    return 0;
}