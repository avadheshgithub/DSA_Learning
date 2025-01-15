/*

Q() Calculate the time complexity for the following code

    ## Program

        int c=0;
        for(int i=1;i*i<n;i+=i){        // i+=i => i*=2   but i*i<n so i=√n
            for(int j=n; j>i;j--){     // 
                c++;
            }
        }


    ## Time complexity : O(√n)    

            # outer loop i = 1,2,4,8.....2^x  (2^x = √n )  
                but condition is given  till i^2<n => i < √(n)

            # inner loop j  -- n-i iterations (n-1,n-2,n-3,----n-√n) series
                when i = 1, j=n-1
                i = 2 , j = n-2
                
                i = √n , j = n-√n

            # total  iterations :- 
            
            n-1 + n-2 + n-4 + n-8 + ------+ (n-2^x) -- x+1 temrs
            => (n+n+n+n....) - (1+2+4+8+-----+ 2^x) (both have x+1 terms)
            => n(x+1)-[2^x+1 - 1]
            => nx + n - 2.2^x + 1   (2^x = √n) so x = log√n
            => O(nlog.√n + n - √n)    // O(√n)<O(n) so ignore O(√n)
            => O(nlog.√n + n)
            => O(nlog. √n)  //log√n = log^1/2 =>1/ 2Log.2n // O(nlog.2√n) > O(n) so ignore O(n)
            => O(n 2log.n)
            => O(2nlogn)
            => O(nlogn) // base 2



*/