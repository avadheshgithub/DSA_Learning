/*
        ## first Negative number in every window of size k

        arr = {2,-3,4,4,-7,-1,4,-2,6}      k=4

        ans = {-3,-3,-7,-7,-7,-1,-2}

    ----------------------------------------------------------------
    Steps - sliding window   TC - O(n)

        1. first find negative value in first k size of first window 
            int k=4;
            p = 1;  ---> prevNegIdx
            i = 1; ----> start of window
            j=4;
            while(j<n){
                if(p>=i) ans[i]=arr[p];
                else {
                    for(int p=i;p<=j;p++){
                        if(arr[p]<0) break;
                    }
                    ans[i]=arr[p];
                }
                i++
                j++;
            }

*/


/*  
    int arr[] = {1,2,-2,1,-3,1,-5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int p = -1;
    vector<int>ans(n-k+1);
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            p=i;
            break;
        }
    }
    if(p==-1) ans[0]=1;    -----> if non-negative index found then fill by 1
    else ans[0] = arr[p];  -----> if we found negative index then fill into ans

    // sliding window
    int i=1;
    int j=k;
    while(j<n){
        if(p>=i) ans[i]=arr[p];
        else {
            p=-1
            for(int x=i;x<=j;x++){
                if(arr[p]<0){
                    p=x;
                    break;
                }
            }
            if(p!=-1) ans[i]=arr[p];
            else ans[i]=1; ---------> not found negative ans;
        }
        i++
        j++;
    }
*/