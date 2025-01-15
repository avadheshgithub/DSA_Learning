/*
    ## STack Span Problem  #Span---> phle se lekar continueosly iska prize highest  hai

    input - {100,80,60,70,60,75,85} ---> price

    output - {1 , 1 , 1, 2, 1,4 , 6} ---> days

    # Hint - previous greater elements but in place of element keep index


        idx         0     1   2     3     4     5     6     7
        input      100   80   60    81    70    60    75    85
    
    pre great el   -1    100   80    100   81   70    81    100

    span =  (input->idx -- pge->idx)

        span       1      1    1     3     1     1     3     7


*/
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {100,80,60,81,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //previous greater element index array using stack (t.c. O(n) s.c. O(n))
    
    stack<int>st;
    int pgi[n];
    pgi[0] = 1;
    st.push(0);

    for(int i=1;i<=n;i++){
        //pop all the element smaller than arr[i];
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        //mark the nas in pge array
        if(st.size()==0) pgi[i]=-1;
        else pgi[i]=st.top();
        pgi[i] = i-pgi[i];  // calculate span
        // push the index;
        st.push(i);
    }

    // dislay the ans
    for(int i=0;i<n;i++){
        cout<<pgi[i]<<" ";
    }
    cout<<endl;
}