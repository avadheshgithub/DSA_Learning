#include<iostream>
using namespace std;
int main(){

    // Series 1-2+3-4+5-6.........up to n;
                // or
    //(1-2)+(3-4)+(5-6)+(7-8)
    


    // Solution 01
    int n,sum = 0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        if(i%2!=0){
            sum += i;
        }
        else{
            sum -= i;
        }
    }
    cout<<"the sum of the series: "<<sum<<endl;


    // Solution 02
    if(n%2==0) sum = -n/2;
    else  sum += -n/2 + n;
    return 0;
}