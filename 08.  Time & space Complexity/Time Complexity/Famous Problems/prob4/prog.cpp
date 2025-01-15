/*

Q() Calculate the time complexity for the following code

    ## Program

        int c=0;
        for(int i=1;i<n;i*=2){          // O(logn)
            for(int j=0; j<i;j++){     // O(n)
                c++;
            }
        }


    ## Time complexity : O(logn) * O(n)  ~~ O(nlogn)

*/