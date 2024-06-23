/*

Q() Calculate the time complexity for the following code

    ## Program

        int c=0;
        for(int i=2;i<n;i*=i){          
            c++;
        }


    ## Time complexity : O(log(logn) )
    ## Solved:

        # Outer loop i = 2,4,16,256 ......(256)^2
        time complexity = total num of iterations = nu of values i can obtain


        => 2,4,16,(256)*(256),.......
        => 2^1,2^2,2^4,2^8,2^16,2^32,2^64......(powers are in a series )
        => 2^1,2^2^1,2^2^2,2^2^3,2^2^4,2^2^5.....2^2^x (2^2^x = n loop end)--(X+1 temrs)
        => O(x+1)
        => O(x) 
        =>O(log(logn) )  
        
        mini part solved O(x)
        => 2^2^x = n 
        => 2^t = n (t = 2^x)
        => logn = t  
        => logn = 2^x  
        => 2^2x = k (k=logn)
        => logk = x
        => log(logn) = x



*/