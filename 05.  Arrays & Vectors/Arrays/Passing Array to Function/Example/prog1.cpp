#include<iostream>
using namespace std;

void display(int a[],int size){ //  int a[] == int* a  ||   a is pointer  --  Here (add of array passed)
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return ;
}

void change(int b[]){ // int b[] == int* b      ||  pass by reference
    b[0] = 100;
}


int main(){

    int arr[] = {1,2,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    display(arr, size);
    change(arr);
    display(arr,size);

    // accessing the elements oof array in another function

    // updation, pass bye value(wrong) / reference (right)
    return 0;
}