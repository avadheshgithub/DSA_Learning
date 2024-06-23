/*

Q() Calculate the time complexity for the following code

    ## Program

        int c=0;
        for(int i=1;i<n;i+=i){ 
            for(int j=0;j<i;j++){
                c++;
            }
        }


    ## Time complexity : O(n)

    ## Solve methode 01:- 
            Outer loop - log.2 n (num of terms in series - ~x)
              inner loops  - num of iterations 
                            i=1 , j=0;
                            i=2 , j=0,1
                            i=4 , j=0,1,2,3
                            i=8 , j=0,1,2,3,5,6,7

                            i=n=2^x , j = n;

            total number of iterations - 2^1, 2^2, 2^3 ........2^x;
                                       - sum = a[r^t -1/ r-1] // t - nu of terms
                                       - (2^x+1)-1
                                       - O(2^1.2^x);
                                       - O(k 2^x); // gievn above
                                       - O(k n)
                
                
                                       - O(n)

    ## Solve methode 02 :-
            total number of iterations 
            => 1+2+4+8+16 --- + n/2 + n
            => 1+1+2+4+8+16 -- + n/2 + n -1;
            => 2+2+4+8+16-1 ---+n/2+n
            => 4+4+8+16-1----
            => 8+8+16-1---
            => 16+16-1---
            =>31-1 -----
            => 2*n-1 ----+ n/2 + n;
            => 2n-1
            => O(2n-1)
            => O(2n)
            => O(n)

                                     
            1+2+4+8+16 --- till this sums will be (2n-1) ex. n=16 check






*/