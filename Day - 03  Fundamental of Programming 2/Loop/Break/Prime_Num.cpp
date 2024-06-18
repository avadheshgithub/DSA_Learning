#include<iostream>
using namespace std;

int main(){

    // Prime Number Check
    
    int n;
    cout<<"Enter a number :";
    cin>>n;
    bool flag = true;

    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag = false;
            //cout<<n<<": is a Composit number"<<endl;
            break;
        }
    }

    if(flag = true) cout<<n<<" is a prime";
    else cout<<n<<" is not prime";
    
    return 0;
}