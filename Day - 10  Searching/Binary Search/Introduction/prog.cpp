/*

Binary search ALgorithem:-

    ## About
        - it is applicable only on sorted order (accesnding or deccending)
        - seacch an element in given array 
        - time complexity O(logn)
        - search space everty time reduced by half 

        # Program

            arr = 1 2 4 5 9 15 18 21
            target = 18;
            int n = sizeof(arr)/sizeof(arr[0]);
            int low = 0;
            int high = n-1;
            while(low<=high){
                int mid  = low + high/2;  //         low+(high-low)/2  beacuse of integer range
                if(arr[mid]==target) cout<<"Element found at"<<mid; break;
                if(arr[mid]<target) low = mid+1;
                if(arr[mid]>target) high = mid-1;
            
            
    ## Time Complexity -

        - total num of operations  - let x
        => Series n + n/2  + n/4  + n/8 + n/16 ------ 1 element 
        => n + n/2^1 + n/2^2 + n/2^3 + ------------- n/2^x  (X terms)
        => O(x)
        =>O(logn)


        # mini calculations :-
            => n/2^x = 1
            => 2^x = n
            => x = logn
            
#//--------------------------------------------------------------------------------------------------

    ## Linear search Algorithem
        - time complexity O(n)
        - Num of operations - n


        # program

            int target = 
            bool flag = false;
            for(int  i==;i<n;i++){
                if(arr[i]== target){
                    flag = true;
                    break;
                }
            }
            if(flag == true) cout<<"Element Present";
            else cout<<"Element no present"



*/