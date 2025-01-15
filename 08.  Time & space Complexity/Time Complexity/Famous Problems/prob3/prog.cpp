/*

Q() Calculate the time complexity for the following code

    ## Program

        int c=0;
        for(int i=1;i<n;i+=i){          // O(logn) (outer loop--->) n times
            for(int j=n; j>=0;j--){     // i is not involved  (inner loop-->O(n)) n+1 times 
                c++;
            }
        }


    ## Time complexity : O(logn) * O(n)  ~~ O(nlogn)

*/