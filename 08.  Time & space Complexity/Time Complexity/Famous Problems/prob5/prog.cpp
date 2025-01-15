/*

Q() Calculate the time complexity for the following code

    ## Program

        int c=0;
        for(int i=1;i*i<n;i*=2){          // 
            for(int j=0; j<i;j++){     // O(n)
                c++;
            }
        }


    ## Time complexity : O(√n)    

            # outer loop i = 1,2,4,8.....2^x  (--->√n )  
                but condition is given  till i^2<n => i < √(n)

            # inner loop j = 1,2,3,4 ------2^x  (Sum of series - 2^x)

            # total  2^x.2^x = n
            => 2^x = √n



*/